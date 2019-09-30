#include "struct_node.h"

//--------------------------------------| 
// Spencer Ross                         |
// CSE 222		Synopsis:                 |
//                                      |
// get node		This function find a new  |
//			node for adding a number in     |
//			the list and also sets it to    |
//			be valid.                       |
//______________________________________|

int get_node(struct node *LL) {
  int i = 0;  //, tmp=SomeNode.next;

  while(LL[i].valid == 1) {
    if(LL[i].valid == 0) {
      LL[i].valid = 1;
      return i;
    } else{
      LL[++i];
    }
  }

  return MYNULL;
}
