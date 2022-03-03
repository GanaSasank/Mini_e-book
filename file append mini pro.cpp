#include<stdio.h>
#include<stdlib.h>
char az[100],by[100],cx[1000000],pr,ne[100];
int addinfo() 
{ 
    FILE *f;
    printf("@@@ WELCOME @@@\n");
    f=fopen("D:\\Diary.txt","a");
    if(f==NULL)
    {
    	printf("Error in opening!!!!\n");
	}
    printf("Enter the date:\n");
    gets(az);
    fprintf(f,"\nDATE :: %s",az);
    printf("NOTE : DONT PRESS ENTER BEFORE YOU COMPLETE WRITING DATA\n");
    printf("Enter the REASON to enter book:\n");
    gets(by);
    fprintf(f,"\nREASON : %s",by);
    printf("Write then data you want to share with me :\n");
    gets(cx);
    fprintf(f,"\nDATA :\n%s",cx);
    fclose(f);
    return 0; 
} 
int addinfo();
int main()
{
	addinfo();
	return 0;
}
