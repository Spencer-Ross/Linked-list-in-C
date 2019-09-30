#include "struct_node.h"
/*-----------------------------------------------------*/
// Spencer Ross                                         |
// CSE 222              Synopsis:                       |
//                                                      |
// delete node          This function deletes a number  |
//                      from the list.                  |
//______________________________________________________|

int delete(struct node *LL, int number) {
	int prev = 0, ret;
	int next = LL[prev].next;			//1st data node/ MYNULL
	ret = search(LL, number);
	
	if(ret == 0) return 0;

	while(next != MYNULL) {
		if(LL[next].data == number) {		//yes?
			LL[prev].next = LL[next].next; //main next skip over
			release_node(LL, next);		//valid = 0
			return 1;
		} else {
			prev = next;
			next = LL[next].next;	//move on and loop
		}
	}
}
