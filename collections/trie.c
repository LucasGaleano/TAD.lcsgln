#include "trie.h"

t_trie* trie_create(){

  t_trie* trie  = malloc(sizeof(t_trie));
  t_trie_node * aux = trie_node_create();
  trie->count_of_words = 0;
  trie->root = aux;
  return trie;
 }

t_trie_node* trie_node_create(){

  t_trie_node* aux = malloc(sizeof(t_trie_node));
  aux->isWord = false;
  aux->parent = NULL;
  aux->left_child = NULL;
  aux->right_sibling = NULL;
  return aux;
}

void trie_insert(t_trie *trie, char* word){

  trie->count_of_words++;
  t_trie_node* parent = trie->root;
  t_trie_node* child = trie->root->left_child;
  while(*word){
    //buscar nodo hijo con la letra
    char c = *(word++);
    printf("siguiente %c\n",c );
      child = search_trie_node(child, c);
    if(child==NULL){
      printf("crear nodo para %c\n",c);
      child = trie_node_create();
      child->character = c;
      add_silbling_node(child,parent);
    }
    parent = child;
    child = child->left_child;
    printf("termino %c\n",c );
  }
  //termina la palabra, marcar isword al ultimo nodo
  parent->isWord = true;
}

void add_silbling_node(t_trie_node* node, t_trie_node* parent){

  node->parent = parent;
  node->right_sibling = parent->left_child;
  parent->left_child = node;
}

t_trie_node* search_trie_node(t_trie_node* node, char c){

  t_trie_node* aux = node;
  while(aux!=NULL){
    printf("prueba nodo %c con %c\n",aux->character,c );
    if(aux->character==c){
      break;
    }
    aux = aux->right_sibling;
  }

  return aux;
}

void trie_print(t_trie *trie){
  trie_child_print(trie->root->left_child,"");
}

void trie_child_print(t_trie_node* node,char* word){

  while(node){
    char* wordCopiada = strdup(word);
    char_cat(wordCopiada,node->character);
    if(node->isWord)
      printf("%s\n",wordCopiada);
    trie_child_print(node->left_child,wordCopiada);
    free(wordCopiada);
    node = node->right_sibling;
  }
}

void char_cat(char* word, char letter){
  int lenWord = strlen(word);
  word = realloc(word,lenWord+2);
  char end = '\0';
  memcpy(word+lenWord,&letter,1);
  memcpy(word+lenWord+1,&end,1);
}


void trie_node_destroy(t_trie_node* node){
  free(node);
}

void trie_destroy(t_trie* trie){
  trie_child_destroy(trie->root->left_child);
  trie_node_destroy(trie->root);
}

void trie_child_destroy(t_trie_node* node){
  if(node!=NULL){
    trie_child_destroy(node->right_sibling);
    trie_child_destroy(node->left_child);
    trie_node_destroy(node);
  }
}
