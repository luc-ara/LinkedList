#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stddef.h>
#include <stdlib.h>

typedef struct S_List_Node {
  void *head ;
  struct S_List_Node *tail ;
} List_Node ;

typedef struct S_List {
  size_t len ;
  List_Node *start ;
} List ;

inline List_Node *alloc_node(void) {
  return calloc(1, sizeof(List_Node)) ;
}
inline List *alloc_list(void) {
  return calloc(1, sizeof(List)) ;
}

inline List_Node *set_head(void *h, List_Node *n) {
  return !n ? NULL : (n->head = h, n) ;
}
inline List_Node *set_tail(List_Node *t, List_Node *n) {
  return !n ? NULL : (n->tail = t, n) ;
}

inline List *set_len(size_t len, List *l) {
  return !l ? NULL : (l->len = len, l) ;
}
inline List *set_start(List_Node *s, List *l) {
  return !l ? NULL : (l->start = s, l) ;
}

inline List_Node *rec_new_list(size_t len) {
  return !len ? NULL : set_tail(rec_new_list(len - 1), alloc_node()) ;
}
inline List *new_list(size_t len) {
  return set_start(rec_new_list(len), set_len(len, alloc_list())) ;
}

#endif
