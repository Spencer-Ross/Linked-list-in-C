#include <stdio.h>
#include "struct_node.h"
#define MAGIC 100		//MAGIC is specific/given # size

//----------------------------------------------| 
// Spencer Ross									|
// CSE 222		Synopsis:						|
//												|
// Class: Mon/Wed	This program let's the user	|
// January 19, 2018	manipulate data in a list.	|
// 			The program first provides			|
// PROGRAM 1		a clean list.				|
//			The provides options to				|
//			insert, delete, or search a			|
//			number. It also allows the			|
//			user to print the entire list.		|
//			The program doesn't end until		|
//			the user exits.						|
//______________________________________________|

int main(void) {
  struct node list[MAGIC];	//List of numbers
  char buffer[MAGIC];		//Holds keyboard input
  char cmnd;
  int ret, number, fn_ret = 0;
  
  init(list); 			//Gotta initialize!!
  
  while(1 == 1) {
    printf("Type in a command and press ENTER\n> ");	//prompt for instruction

    fgets(buffer, MAGIC, stdin);				//take input into string
    ret=sscanf(buffer, "%c%d", &cmnd, &number);	//parse -> cmndLetter/number

    if(ret == 0) {
	printf("Press 'i' followed by a number to add to list.\n"); //guide
	printf("Press 'p' to print the list.\n");                  //grammer sucks
	printf("Press 's' followed by a number to search list.\n");
	printf("Press 'd' followed by a number to delete from list.\n");
	printf("Press 'x' to exit program.\n");       //this will end fun
	printf("Type in a command and press ENTER\n> ");
    } else {
	//Start taking instructions
		if(cmnd == 'i')	{	//i = insert/add
			fn_ret = add(list, number);	//add function inserts number
			if(fn_ret == 1) 
				printf("SUCCESS\n");
			else if(fn_ret == 0)
				printf("NODE ALREADY IN LIST\n");
        	else
        	    printf("List is Full");
		}
		else if(cmnd == 'p') {	//p = print list
 			print(list);		//print prints list
		}
		else if(cmnd == 's') {	//s = search
			fn_ret = search(list, number);	//search searches list for number
			if(fn_ret == 1)
				printf("%d FOUND\n", number);
			else
				printf("%d NOT FOUND\n", number);
		}
		else if(cmnd == 'd') {	//d = delete
			fn_ret = delete(list, number);	//delete deletes number from list
  			if(fn_ret == 1)
				printf("SUCCESS\n");
			else
				printf("NODE NOT FOUND\n");
		}
		else if(cmnd == 'x') {	//x = exit //redundant
  			break;			//GameOver
  		}
  	}
  }  
  	return 0;
}
