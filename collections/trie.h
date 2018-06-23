#ifndef TRIE_H_
#define TRIE_H_
#include "node.h"

typedef struct{
  t_trie_node *root;
  int count_of_items;
}t_trie;

void trie_insert(t_trie *trie, char* word);
void trie_search(t_trie *trie, char* word);


#endif //TRIE_H_
