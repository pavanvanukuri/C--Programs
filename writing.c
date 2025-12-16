#include <Stdio.h>
main(){
	FILE *fp;
	char ch;
	int i=0;
	fp=fopen("C:\\Users\\vanuk\\OneDrive\\Documents\\c_lang\\file1.txt","r");
	while(i<10)
	{
		ch=getchar();
		fputc(ch,fp);
		i++;
	}
	fclose(fp);
	return 0;
		
	}
