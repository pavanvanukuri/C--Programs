#include<stdio.h>
#include<string.h>
int main(){
	char a[200]="aditya";
	char b[200];
	strcpy(b,a);
	printf("copied data : ");
	puts(b);
	return 0;
}
