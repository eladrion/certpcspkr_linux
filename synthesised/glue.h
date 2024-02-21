#ifndef GLUE_H
#define GLUE_H
#include <gc_stack.h>
//#include <stdio.h>
extern unsigned int get_unboxed_ordinal(value);
extern unsigned int get_boxed_ordinal(value);
extern value *get_args(value);
extern value make_Coq_Init_Datatypes_nat_O(void);
extern value make_Coq_Init_Datatypes_nat_S(value, value *);
extern value alloc_make_Coq_Init_Datatypes_nat_S(struct thread_info *, value);
extern value make_Coq_Numbers_BinNums_positive_xI(value, value *);
extern value alloc_make_Coq_Numbers_BinNums_positive_xI(struct thread_info *, value);
extern value make_Coq_Numbers_BinNums_positive_xO(value, value *);
extern value alloc_make_Coq_Numbers_BinNums_positive_xO(struct thread_info *, value);
extern value make_Coq_Numbers_BinNums_positive_xH(void);
extern value make_Coq_Numbers_BinNums_Z_Z0(void);
extern value make_Coq_Numbers_BinNums_Z_Zpos(value, value *);
extern value alloc_make_Coq_Numbers_BinNums_Z_Zpos(struct thread_info *, value);
extern value make_Coq_Numbers_BinNums_Z_Zneg(value, value *);
extern value alloc_make_Coq_Numbers_BinNums_Z_Zneg(struct thread_info *, value);
extern value make_Coq_Init_Datatypes_bool_true(void);
extern value make_Coq_Init_Datatypes_bool_false(void);
extern unsigned int get_Coq_Init_Datatypes_nat_tag(value);
extern unsigned int get_Coq_Numbers_BinNums_positive_tag(value);
extern unsigned int get_Coq_Numbers_BinNums_Z_tag(value);
extern unsigned int get_Coq_Init_Datatypes_bool_tag(value);
//extern void print_Coq_Init_Datatypes_nat(value);
//extern void print_Coq_Numbers_BinNums_positive(value);
//extern void print_Coq_Numbers_BinNums_Z(value);
//extern void print_Coq_Init_Datatypes_bool(value);
extern value call(struct thread_info *, value, value);
extern signed char const lparen_lit[2];

extern signed char const rparen_lit[2];

extern signed char const space_lit[2];

extern signed char const fun_lit[6];

extern signed char const type_lit[7];

extern signed char const unk_lit[6];

extern signed char const prop_lit[7];

extern signed char const names_of_Coq_Init_Datatypes_nat[2][2];

extern signed char const names_of_Coq_Numbers_BinNums_positive[3][3];

extern signed char const names_of_Coq_Numbers_BinNums_Z[3][5];

extern signed char const names_of_Coq_Init_Datatypes_bool[2][6];


#endif /* GLUE_H */
