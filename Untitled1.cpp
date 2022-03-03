#include<stdio.h>
#include<conio.h>
int main()
{
char inp[200];
printf("enter string");
getchar();
fgets(inp,100,stdin);
printf(" %s",inp);
return 0;
}
