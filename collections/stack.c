
#include "stack.h"


t_stack* stack_create(){
  t_stack* listaNueva = malloc(sizeof(t_stack));
  listaNueva->countElemts = 0;
  return listaNueva;

}
void stack_push(t_stack* stack, void* stackElem){

  t_nodo* nodo = malloc(sizeof(t_nodo));
  nodo->data = stackElem;
  nodo->next = NULL;

  if (stack->head != NULL)
    nodo->next = stack->head;
  stack->head = nodo;
  stack->countElemts++;

}
void* stack_pop(t_stack* stack){

  if(stack->countElemts == 0)
    return NULL;
  t_nodo* stackElem = stack->head;
  stack->head = stack->head->next;
  stack->countElemts--;
  return stackElem->data;

}
