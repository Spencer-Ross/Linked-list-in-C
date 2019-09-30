#include "struct_node.h"

void init(struct node *LL) {
  int i;

  for(i = 0; i < 100; i++) {
    if(i == 0) {
      LL[i].data  = 42;
      LL[i].next  = -1;
      LL[i].valid = 1;
    } else {
      LL[i].data  = 001;
      LL[i].next  = -9;
      LL[i].valid = 0;
    }
  }
}