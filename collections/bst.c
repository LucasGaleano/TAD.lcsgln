#include "bst.h"


t_bst* bst_create(){

  t_bst* bst =  malloc(sizeof(t_bst));
  bst->numbersOfLeaf = 0;
  bst->root = NULL;
  return bst;
}

void bst_insert(t_bst* tree, void* data, char* NewKey){

  t_tree_node* nodeToInsert = tree_node_create();
  nodeToInsert->data = data;
  nodeToInsert->key =
  t_tree_node* parent = NULL;
  t_tree_node* child = tree->root;

  while(child!=NULL){
    parent = child;
    if(CompararString(child->key, nodeToInsert->key) < 0)
      child = child->left;
    else
      child = child->right;
  }
  nodeToInsert->parent = parent;
  if(parent == NULL)
    tree->root = nodeToInsert;
  else{
    if(CompararString(parent->key, nodeToInsert->key) < 0)
      parent->left = nodeToInsert;
    else
      parent->right = nodeToInsert;
  }
}

void* bst_search_value(t_bst* tree, char* key){

  t_tree_node* child = tree->root;
  while(child!=NULL && child->key != key){
    if(CompararString(child->key,key)<0)
      child = child->left;
    else
      child = child->right;
  }
  if(child == NULL)
    return NULL;
  else
    return child->data;
}


void print_inorder_tree(t_tree_node* root){
  if(root != NULL){
    print_inorder_tree(root->left);
    printf("%s %s\n",root->key, (char*)root->data);
    print_inorder_tree(root->right);
  }
}

int CompararString(const char* str1,const char* str2){

    if(strlen(str1) == strlen(str2))
      return strcmp(str2,str1);
    if(strlen(str1) < strlen(str2))
      return 1;
    else
      return -1;

}
