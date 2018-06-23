#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include "node.h"


typedef struct t_stack{
  t_nodo* head;
  int countElemts;
}t_stack;

t_stack* stack_create();
void stack_push(t_stack* stack, void* elem);
void* stack_pop(t_stack* stack);

#endif //LIST_H
