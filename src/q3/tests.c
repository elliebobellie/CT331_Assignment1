#include <stdio.h>
#include "genericLinkedList.h"


void printChar(void *data) {
    printf("%c\n", *(char*)data);
}

void printStr(void *data) {
    printf("%s\n", data);
}

void printInt(void *data) {
    printf("%d\n", *(int*)data);
}

void printFloat(void *data) {
    printf("%f\n", *(float*)data);
}


void runTests(){
  printf("Tests running...\n");
  
  char e = 'E';
  listElement* l = createEl(&e, sizeof(char),&printChar);
  traverse(l);
  length(l);
  
  int i = 25;
  insertAfter(l,&i,sizeof(i),&printInt);
  traverse(l);
  length(l);
  
  
  printf("\nTests complete.\n");
}
