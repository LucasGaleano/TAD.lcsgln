#include "trie.h"

t_trie* trie_create(){

  t_trie* trie  = malloc(sizeof(t_trie));
  t_trie_node * aux = trie_node_create();
  trie->count_of_words = 0;
  trie->root = aux;
  return trie;
}

void trie_insert(t_trie *trie, char* word){

  trie->count_of_words++;
  t_trie_node* root = trie->root;
  while(word){
    //buscar nodo hijo con la letra
    char c = ++(*word);
    t_trie_node* node = search_trie_node(root->right_sibling, c);
    if(node==NULL){
      node = trie_node_create();
      node->character = c;
      add_silbling_node(root->right_sibling);
    }
    root = node;
  }
  //termina la palabra, marcar isword al ultimo nodo
  node->isWord = true;
}

void trie_print(t_trie *trie){

  trie->root
  t_trie_node* child = trie->left_child;
  if(child != NULL);

    while(child){
      char* word = malloc(sizeof(char)+1);
      word = strdup("");
      trie_child_print(child,word);
      child = child->right_sibling;
    }
}


void trie_child_print(t_trie_node* trie_node,char* word){

  t_trie_node* child = trie_node->left_child;
  while(child){
    char_cat(word,child->character);
    if(child->isWord)
      printf("%s\n",word );
    trie_child_print(child,word);
    child = child->right_sibling;
    }
  }
}

void char_cat(char* word, char letter){
  word = realloc(word,strlen(word)+2);
  strcat(word,&letter);
}
