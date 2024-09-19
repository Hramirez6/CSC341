//Harvey Ramirez
//September 10, 2024
//CSC 341

#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[])
{
	int i;
	
	int *pointer1;

	pointer1 = (int *)malloc(sizeof(int)*5);

	printf("The address of argc is %p\n", &argc);

	printf("The address of local variable i in stack address is %p\n", &i);

	printf("The address of uninitialized x is %p\n", &x);

	printf("The address of initialized y is %p\n", &y);

	printf("The address of the heap variable pointer is %p \n", &pointer1);
	
	return EXIT_SUCCESS;
}

