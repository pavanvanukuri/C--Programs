#include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	int i=0;
	fp=fopen("C:\\Users\\vanuk\\OneDrive\\Documents\\f.txt","w");
	while(i<10){
		ch=getchar();
		fputc(ch,fp);
		i++;
	}
	fclose(fp);
	return 0;
}
