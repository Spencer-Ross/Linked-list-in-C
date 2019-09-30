#include "struct_node.h"
/*-----------------------------------------------------*/
// Spencer Ross                                         |
// CSE 222              Synopsis:                       |
//                                                      |
// release node         This function sets the node     |
//                      being deleted to invalid.       |
//______________________________________________________|

void release_node(struct node *LL, int node) {
	LL[node].valid = 0;	//release validity of node
	return;
}