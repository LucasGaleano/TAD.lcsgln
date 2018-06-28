#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tad-lcsgln/stack.h>
#include <tad-lcsgln/bst.h>
#include <tad-lcsgln/trie.h>

void pruebaBST();



int main(){

  t_trie* trie = trie_create();
  printf("1p\n");
  trie_insert(trie,"lucos");
  trie_insert(trie,"pepe");
  trie_insert(trie,"lucia");
  trie_insert(trie,"mateo");
  trie_insert(trie,"matias");

  trie_print(trie);
  trie_destroy(trie);
}

void pruebaBST(){

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
