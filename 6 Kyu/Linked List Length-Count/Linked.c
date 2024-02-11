#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct Node {
	struct Node *next;
	int value;
};

size_t list_length (const struct Node *list){
  struct Node *ptr;
  int count = 0;
  
  ptr = list;
  
  while(ptr != NULL){
    ptr = ptr->next;
    count++;
  }
  
  return count; 
}


size_t list_count (const struct Node *list, int search_val){
  struct Node *ptr;
  int count = 0;
  
  ptr = list;

  while(ptr != NULL){
    if(ptr->value == search_val) count++;
    ptr = ptr->next;
  }
  
  return count;
}