#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n");
 
  listElement* l = createEl("Test String (1).", 30);
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  listElement* l3 = insertAfter(l2, "LOL a final string (3)", 30);
  insertAfter(l3, "HAHAHA(4)", 30);
  /*
  //printf("%s\n%p\n", l->data, l->next);
  //Test create and traverse
  traverse(l);
  length(l);
  printf("\n");

  //Test insert after
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  insertAfter(l2, "a final string (3)", 30);
  traverse(l);
  printf("\n");

  // Test delete after
  deleteAfter(l);
  traverse(l);
  printf("\n");
  */
  
  
  
  
  //Test for push //works
  /*
  listElement** dp = &l;
  push(dp, "i did it", 30);
  traverse(l);
  */
  
  //Test for pop
  //listElement** ll = &l; // pop works
  //pop(ll);
  //pop(ll);
  
  //Test for enqueue //works
  //listElement** dp = &l;
  //enqueue(dp, "i did it", 30); 
  //traverse(l);
  
  //Test for dequeue //work
  /*
  traverse(l);
  
  dequeue(l);
  dequeue(l);
  printf("\n");
  printf("\n");
  */
  
  
  traverse(l);
  
  
  

  printf("\nTests complete.\n");
}
