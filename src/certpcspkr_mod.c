// SPDX-License-Identifier: GPL-2.0-only
/*
 *  Partially certified and synthesised
 *  PC Speaker beeper driver for Linux
 *
 *  Copyright (c) 2023-2024 Mario Frank (redirection to ml_pcspkr_event, making skeleton out of this file)
 *  Copyright (c) 2023 Mario Egger (gave me some compilation infrastructure example, i.e. Makefile)
 *  Copyright (c) 2002 Vojtech Pavlik (original C Code)
 *  Copyright (c) 1992 Orest Zborowski (original C Code)
 */


#include <linux/kernel.h>
#include <linux/module.h>
//#include <linux/i8253.h>
#include <linux/input.h>
#include <linux/platform_device.h>
//#include <linux/timex.h> // PIT_TICK_RATE
#include <linux/io.h>

#include "certpcspkr_mod.h"

MODULE_AUTHOR("Mario Frank <mario.frank@uni-potsdam.de>");
MODULE_DESCRIPTION("Certified PC Speaker beeper driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pcspkr");


static int pcspkr_event(struct input_dev *dev, unsigned int type,
			unsigned int code, int value)
{
	printk(KERN_INFO "[certcspkr]: Event triggered\n");
	
    return ml_pcspkr_event(type, code, value);
}

static int pcspkr_probe(struct platform_device *dev)
{

    printk(KERN_INFO "[certcspkr]: Probing started\n");

	struct input_dev *pcspkr_dev;
	int err;

	pcspkr_dev = input_allocate_device();
	if (!pcspkr_dev)
		return -ENOMEM;

	printk(KERN_INFO "[certcspkr]: Allocated device\n");

	pcspkr_dev->name = "PC Speaker";
	pcspkr_dev->phys = "isa0061/input0";
	pcspkr_dev->id.bustype = BUS_ISA;
	pcspkr_dev->id.vendor = 0x001f;
	pcspkr_dev->id.product = 0x0001;
	pcspkr_dev->id.version = 0x0100;
	pcspkr_dev->dev.parent = &dev->dev;

	pcspkr_dev->evbit[0] = BIT_MASK(EV_SND);
	pcspkr_dev->sndbit[0] = BIT_MASK(SND_BELL) | BIT_MASK(SND_TONE);
	pcspkr_dev->event = pcspkr_event;
	
	printk(KERN_INFO "[certcspkr]: Configured device\n");

	err = input_register_device(pcspkr_dev);
	if (err) {
		input_free_device(pcspkr_dev);
		return err;
	}

	printk(KERN_INFO "[certcspkr]: Registered device\n");

	platform_set_drvdata(dev, pcspkr_dev);

	printk(KERN_INFO "[certcspkr]: Probing DONE\n");

	return 0;
}

static int pcspkr_remove(struct platform_device *dev)
{
	printk(KERN_INFO "[certcspkr]: Removing started\n");
	struct input_dev *pcspkr_dev = platform_get_drvdata(dev);
    input_unregister_device(pcspkr_dev);
	
	printk(KERN_INFO "[certcspkr]: Unregistered Device\n");
	
	/* turn off the speaker */
	pcspkr_event(NULL, EV_SND, SND_BELL, 0);
	
	printk(KERN_INFO "[certcspkr]: Removing DONE\n");

	return 0;
}

static int pcspkr_suspend(struct device *dev)
{
	printk(KERN_INFO "[certcspkr]: Going into suspend\n");
	
	pcspkr_event(NULL, EV_SND, SND_BELL, 0);

    printk(KERN_INFO "[certcspkr]: Gone into suspend\n");

	return 0;
}

static void pcspkr_shutdown(struct platform_device *dev)
{
	printk(KERN_INFO "[certcspkr]: Shutting down\n");
	
	/* turn off the speaker */
	pcspkr_event(NULL, EV_SND, SND_BELL, 0);
	
	printk(KERN_INFO "[certcspkr]: Shutdown\n");
	
}

static const struct dev_pm_ops pcspkr_pm_ops = {
	.suspend = pcspkr_suspend,
};

static struct platform_driver pcspkr_platform_driver = {
	.driver		= {
		.name	= "pcspkr",
		.pm	= &pcspkr_pm_ops,
	},
	.probe		= pcspkr_probe,
	.remove		= pcspkr_remove,
	.shutdown	= pcspkr_shutdown,
};
module_platform_driver(pcspkr_platform_driver);

