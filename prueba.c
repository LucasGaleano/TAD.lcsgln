#include <stdio.h>
#include "collections/stack.h"
#include "collections/bst.h"

int main(){

  t_bst* bst = bst_create();
  bst_insert(bst,"lucas","1");
  bst_insert(bst,"hola","4");
  bst_insert(bst,"gato","7");
  bst_insert(bst,"perro","21");
  bst_insert(bst,"cosas","24");
  bst_insert(bst,"chau","5");
  bst_insert(bst,"casa","2");
  print_inorder_tree(bst->root);

}
