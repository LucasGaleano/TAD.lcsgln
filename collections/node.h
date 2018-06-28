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
  struct trie_node *parent;
  struct trie_node *left_child;
  struct trie_node *right_sibling;
}t_trie_node;



#endif //NODE_H_
