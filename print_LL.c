#include<stdio.h>
#include "struct_node.h"
/*-----------------------------------------------------*/
// Spencer Ross                                         |
// CSE 222              Synopsis:                       |
//                                                      |
// print list           This function prints the        |
//                      entire list in numerical order  |
//______________________________________________________|

void print(struct node *LL) {
  int next = LL[0].next;

  while(next != MYNULL) {
	printf("%d ", LL[next].data);
	next = LL[next].next;
  }
  
  printf("\n");
  return;
}
