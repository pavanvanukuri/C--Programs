#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("C:\\Users\\vanuk\\OneDrive\\Documents\\c_lang\\file1.txt","r+");
	fseek(fp,0,SEEK_END);
	fprintf(fp,"cse_13");
	rewind(fp);
	fprintf(fp,"hello worlld");
	fclose(fp);
	return 0;
