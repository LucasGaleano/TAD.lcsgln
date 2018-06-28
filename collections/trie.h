#ifndef TRIE_H_
#define TRIE_H_
#include "node.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

typedef struct{
  t_trie_node *root;
  int count_of_words;
}t_trie;

t_trie* trie_create();
t_trie_node* trie_node_create();
void trie_insert(t_trie *trie, char* word);
t_trie_node* search_trie_node(t_trie_node* node, char c);
void add_silbling_node(t_trie_node* node, t_trie_node* parent);
//void trie_search(t_trie *trie, char* word);
void trie_print(t_trie *trie);
void trie_child_print(t_trie_node* trie_node,char* word);
void char_cat(char* word, char letter);
void trie_node_destroy(t_trie_node* node);
void trie_destroy(t_trie* trie);
void trie_child_destroy(t_trie_node* node);

#endif //TRIE_H_
