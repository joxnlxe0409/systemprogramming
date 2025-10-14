#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void main(int argc, char *argv[])
{
	FILE *src;
	char ch;
	src = fopen(argv[1], "r");
	
	while(!feof(src)){
		ch = (char)fgetc(src);
		if(ch != EOF)
			printf("%c", ch);
	}
	fclose(src);
}
