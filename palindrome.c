#include<stdio.h>
int main(){
	int n,temp,rev=0,digit;
	scanf("%d",&n);
	temp=n;
	while(temp>0){
		digit=temp%10;
		rev=rev*10+digit;
		temp=temp/10;
	}
	if(rev==n)
	printf("palimdrome");
	else 
	printf("not");
	return 0;
}
