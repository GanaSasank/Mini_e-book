#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int addinfo();
int start1();
char az[100],by[100],cx[1000000],pr,ne[100];
int main()
{
	int ii=1;
	while(ii!=0)
	{
	int jj;
	printf("Enter your choice:\n");
	printf("Enter 1 to start book to thoughts\n");
	printf("Enter 2 to add data to your book of thoughts\n");
	printf("Enter 3 to display your data in book fo thoughts\n");
	printf("Enter 4 to Exit\n");
	scanf("%d",&jj);
	if (jj==1)
	{
		start1();
	}
	else if(jj==2)
	{
		addinfo();
	}
	    
		printf("Enter 0 to exit and 1 to continue\n");
	    scanf("%d",&ii);
	}
    return 0;
}
int start1() 
{ 
    FILE *f;
    printf("@@@ WELCOME @@@\n");
    f=fopen("D:\\Diary.txt","w+");
    if(f==NULL)
    {
    	printf("Error in opening!!!!\n");
    }
    printf("Enter the date:\n");
    gets(az);
    fprintf(f,"Date :: %s",az);
    printf("NOTE : DONT PRESS ENTER BEFORE YOU COMPLETE WRITING DATA\n");
    printf("Enter the reason to enter book:\n");
    gets(by);
    fprintf(f,"\nREASON : %s",by);
    printf("Write then data you want to share with me :\n");
    gets(cx);
    fprintf(f,"\nData :\n%s",cx);
    fclose(f);
    return 0;
} 
int addinfo() 
{ 
    FILE *f;
    printf("@@@ WELCOME @@@\n");
    f=fopen("D:\\Diary.txt","a");
    if(f==NULL)
    {
    	printf("Error in opening!!!!\n");
	}
	fprintf(f,"@@");
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

