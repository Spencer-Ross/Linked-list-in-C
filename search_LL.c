#include<stdio.h>
#include "struct_node.h"
/*-----------------------------------------------------*/
// Spencer Ross                                         |
// CSE 222              Synopsis:                       |
//                                                      |
// search List          This function find a number     |
//                      the number requested in the     |
//                      list if it's available.         |
//______________________________________________________|

int search(struct node *LL, int number)
{
  int next = LL[0].next;

  while(next != MYNULL) {
	if(LL[next].data == number)	{//if data is the number looking for
		return 1;	//return 1 for success
	}
	next = LL[next].next;
  }
  
  return 0;			//return 0 for failure
}