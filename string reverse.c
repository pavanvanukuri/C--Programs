#include<stdio.h>
int main(){
	char a[100];
	int i,len=0;
	printf("\n enter any string");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
