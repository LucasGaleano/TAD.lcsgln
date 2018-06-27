#ifndef NODE_H_
#define NODE_H_
#include <stdbool.h>
#include <stdlib.h>




typedef struct nodo{
  void* data;
  struct nodo* next;
}t_nodo;

typedef struct tree_node{
  char* key;
  void* data;
  struct tree_node* parent;
  struct tree_node* left;
  struct tree_node* right;
}t_tree_node;


typedef struct trie_node{
  char character;
  bool isWord;
  struct trie_node *left_child;
  struct trie_node *right_sibling;
}t_trie_node;

t_tree_node* tree_node_create();
t_trie_node* trie_node_create();

t_tree_node* tree_node_create(){
  t_tree_node* tree_node = malloc(sizeof(t_tree_node));
  tree_node->data = NULL;
  tree_node->key = NULL;
  tree_node->parent = NULL;
  tree_node->left = NULL;
  tree_node->right = NULL;
  return tree_node;

}

t_trie_node* trie_node_create(){

  t_trie_node* aux = malloc(sizeof(t_trie_node));
  aux->character = NULL;
  aux->isWord = false;
  aux->left_child = NULL;
  aux->right_sibling = NULL;
}

#endif //NODE_H_
