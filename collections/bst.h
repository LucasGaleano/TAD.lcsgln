#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

typedef struct bst{
  t_tree_node* root;
  int numbersOfLeaf;
}t_bst;

t_tree_node* tree_node_create(void* data,char* key);
t_bst* bst_create();
void print_inorder_tree(t_tree_node* root);
void bst_insert(t_bst* tree, void* data, char* key);
void* bst_search_value(t_bst* tree, char* key);
int CompararString(const char* str1,const char* str2);



#endif //BST_h
