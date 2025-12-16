#include<stdio.h>
int main(){
	char a[100];
	int i,len=0;
	printf("\n enter any string");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i>=97]&&a[i]<=122){
			a[i]=a[i]-32;
		}
			}
			printf("upper case string is =%s",a);
			return 0;
		}
