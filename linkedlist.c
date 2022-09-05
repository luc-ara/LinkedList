#include "linkedlist.h"

struct S_List_Node ;

struct S_List ;

extern inline List_Node *alloc_node(void) ;
extern inline List *alloc_list(void) ;

extern inline List_Node *set_head(void *h, List_Node *n) ;
extern inline List_Node *set_tail(List_Node *t, List_Node *n) ;

extern inline List *set_len(size_t len, List *n) ;
extern inline List *set_start(List_Node *s, List *l) ;

extern inline List_Node *rec_new_list(size_t len) ;
extern inline List *new_list(size_t len) ;

