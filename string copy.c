#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i;
	printf("enter a string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf(" copied string: %s",b);
	return 0;
}
