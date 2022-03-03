#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main() 
{ 
	FILE *f; 
	char filename[100], c;
	f=fopen("D:\\Diary.txt","r"); 
	if (f == NULL) 
	{ 
		printf("ERROR in OPENING FILE\n"); 
		exit(0); 
	} 
	c = fgetc(f); 
	while (c != EOF) 
	{ 
		printf ("%c", c); 
		c = fgetc(f); 
	} 

	fclose(f); 
	return 0; 
}

