#include<stdio.h>
int a=10;
int main()
{
	extern int a;
	printf("\n a value is %d",a);
	return 0;
}
