#include "struct_node.h"
/*-----------------------------------------------------*/
// Spencer Ross                                         |
// CSE 222              Synopsis:                       |
//                                                      |
// add node             This function adds a new        |
//                      number into the list.           |
//______________________________________________________|


int add(struct node *LL, int number) {
	int prev = 0;			//indx of previous node
	int next = LL[prev].next;	//indx of next node
	int temp, ret;

	ret = search(LL, number);

	if(ret == 1) return 0;

	temp = get_node(LL); 	//Legal Value? want this outside loop
    
    if(temp == MYNULL) return MYNULL;

    LL[temp].data = number;	//Save number in this position
	while(next != MYNULL) {
		if(LL[next].data > number) {	//insert before Here
			LL[temp].next = LL[prev].next;
			LL[prev].next = temp;
			return 1;
		} else {		//move on and loop
			prev = next;
			next = LL[next].next;
		}
	}

	LL[prev].next = temp;
	LL[temp].next = MYNULL;
	return 1;
}
