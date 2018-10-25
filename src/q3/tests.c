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

  /*
  listElement* l = createEl("Test String (1).", 30);
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  listElement* l3 = insertAfter(l2, "LOL a final string (3)", 30);
  insertAfter(l3, "HAHAHA(4)", 30);
  
  l.printFunction = printfunc;
  l.printFunction("Hello");

  */
  
  
  char p = 'P';
  listElement* l = createEl(&p, sizeof(char),&printChar);
  traverse(l);
  
  printf("\nTests complete.\n");
}
