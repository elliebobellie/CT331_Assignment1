#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n");
   
  /*
  listElement* l = createEl("Test String (1).", 30);
  
  //Test create and traverse
  traverse(l);
  length(l);
  printf("\n");

  //Test insert after
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  listElement* l3 = insertAfter(l2, "a final string (3)", 30);
  traverse(l);
  printf("\n");

  // Test delete after
  deleteAfter(l);
  traverse(l);
  printf("\n");
  
  insertAfter(l3, "actually this is the final string(4)", 30);
  */
  
  listElement* l = createEl("Test String (1).", 30);
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  listElement* l3 = insertAfter(l2, "a final string (3)", 30);
  insertAfter(l3, "actually this is the final string(4)", 30);
  
  /*
  //Test for push 
  printf("Test for push\n");
  printf("Before\n");
  traverse(l);
  printf("\n");
  printf("After\n");
  listElement** dp = &l;
  push(dp, "i did it", 30);
  traverse(l);
  */
  
  /*
  //Test for pop
  printf("Test for pop\n");
  printf("Before\n");
  traverse(l);
  printf("\n");
  printf("After\n");
  listElement** dp = &l;
  pop(dp);
  traverse(l);
  */
  
  /*
  //Test for enqueue 
  printf("Test for enqueue\n");
  printf("Before\n");
  traverse(l);
  printf("\n");
  printf("After\n");
  listElement** dp = &l;
  enqueue(dp, "i did it", 30);
  traverse(l);
  */
  
  /*
  //Test for dequeue 
  printf("Test for enqueue\n");
  printf("Before\n");
  traverse(l);
  printf("\n");
  printf("After\n");
  dequeue(l);
  traverse(l);
  */
  
  printf("\nTests complete.\n");
}
