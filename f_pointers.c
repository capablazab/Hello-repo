/*
 * Differences between passing arguments by value (no pointers) and
 * passing them by reference (through pointers)
 * 
 * Two funcions are given, for the two cases.
 * 
 * Ive introduced this text to make a different commit to github.
 */

#include <stdio.h>

void main()
{
	int var=0, result;
	int *p;
	
	// case 1: without pointers
	result=Add3(var);

	printf("Result: %d\n", result);
	
	// case 2: with pointers
	
	p=&var;
	
	Add3_p(p);
	
	printf("var: %d\n", var);
	
	
}

/*
 * 1. without pointers
 * 
 * Adds 3 units to the variable num
 * Returns: int num
 */
int Add3(int num)
{
	num+=3;
	
	return num;
}

/*
 * 2. with pointers
 * 
 * Adds 3 units to the variable referenced by p.
 * Returns: Nothing
 */
void Add3_p(int *p)
{
	*p+=3;
}

