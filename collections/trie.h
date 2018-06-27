#ifndef TRIE_H_
#define TRIE_H_
#include "node.h"
#include <stdbool.h>
#include <string.h>

typedef struct{
  t_trie_node *root;
  int count_of_words;
}t_trie;

t_trie* trie_create();
void trie_insert(t_trie *trie, char* word);
//void trie_search(t_trie *trie, char* word);
void trie_print(t_trie *trie);
void trie_child_print(t_trie_node* trie_node,char* word);
void char_cat(char* word, char letter);


#endif //TRIE_H_
