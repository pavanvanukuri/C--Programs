#include <Stdio.h>
main(){
	FILE *fp;
	char ch;
	fp=fopen("C:\\Users\\vanuk\\OneDrive\\Documents\\c_lang\\file1.txt","r");
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
}
