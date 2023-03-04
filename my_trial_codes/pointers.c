#include <stdio.h>

int main(void)
{
	int a;
	int *p;
	p = &a;
	printf("Size of a is %d\n", sizeof(int));
	printf("Address of a is %d\n Value of a  is %d\n", p, *p);
}
	
