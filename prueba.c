#include <stdio.h>
#include <tad-lcsgln/stack.h>
#include <tad-lcsgln/bst.h>

int main(){

  t_bst* bst = bst_create();
  bst_insert(bst,"lucas","1");
  bst_insert(bst,"hola","4");
  bst_insert(bst,"gato","7");
  bst_insert(bst,"perro","21");
  bst_insert(bst,"cosas","24");
  print_inorder_tree(bst->root);
  char* valorEncontrado = bst_search_value(bst,"4");
  printf("%s\n", valorEncontrado);

}
