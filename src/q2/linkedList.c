#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

typedef struct listElementStruct{
  char* data;
  size_t size;
  struct listElementStruct* next;
} listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size){
  listElement* e = malloc(sizeof(listElement));
  if(e == NULL){
    //malloc has had an error
    return NULL; //return NULL to indicate an error.
  }
  char* dataPointer = malloc(sizeof(char)*size);
  if(dataPointer == NULL){
    //malloc has had an error
    free(e); //release the previously allocated memory
    return NULL; //return NULL to indicate an error.
  }
  strcpy(dataPointer, data);
  e->data = dataPointer;
  e->size = size;
  e->next = NULL;
  return e;
}

//Prints out each element in the list
void traverse(listElement* start){
  listElement* current = start;
  while(current != NULL){
    printf("%s\n", current->data);
    current = current->next;
  }
}

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, char* data, size_t size){
  listElement* newEl = createEl(data, size);
  listElement* next = el->next;
  newEl->next = next;
  el->next = newEl;
  return newEl;
}


//Delete the element after the given el
void deleteAfter(listElement* after){
  listElement* delete = after->next;
  listElement* newNext = delete->next;
  after->next = newNext;
  //need to free the memory because we used malloc
  free(delete->data);
  free(delete);
}

// Assignment 2

int length(listElement* list) {
	listElement* current = list;
	int length = 0;
	while (current != NULL) {
		length++;
		current = current->next;
	}
	return length;
}

void push(listElement** list, char* data, size_t size) {
	listElement* newEl = createEl(data, size);
	newEl->next = *list;
	*list = newEl;

}

listElement* pop(listElement** list) {

	listElement* ptr = *list;
	*list = (*list)->next;
	ptr->next = NULL;
	return ptr; // popped item

}

// same as push
void enqueue(listElement** list, char* data, size_t size) {
	
	listElement* newEl = createEl(data, size);
	newEl->next = *list;
	*list = newEl;
}

listElement* dequeue(listElement* list) {

	listElement* ptr = list;
	int len = length(list);
	int i = 0;
	while (i <= len) {
		listElement* ptrNEXT = ptr->next;
		if (ptrNEXT->next == NULL) {
			ptr->next = NULL;
			return ptr; // popped item
		}
		ptr = ptr->next;
		i++;
	}

	return NULL;
}

