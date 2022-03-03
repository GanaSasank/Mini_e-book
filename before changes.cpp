#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>
#define MAX 10
char az[100],by[100],cx[1000000],pr,ne[100];
int A[MAX],B[MAX];
int topA = -1;
int topB = -1;
int pi,ci,bc;
void push_to_A(int itemA);
int pop_from_A();
void push_to_B(int itemB);
int pop_from_B();
void z();
void game();
void calc() ;
int timer();
int infobook();
void addinfo();
int bookofthoughts();
void set();
void getin();
void reset();
int main()
{
	while(1)
	{
		int choice1;
		printf("Enter your choice\n");
		printf("Press 1 to play game\n");
		printf("Press 2 to use calculator\n");
		printf("Press 3 to Enter your book of thoughts\n");
		printf("Press 4 to Enter Information book\n");
		printf("press 5 to set timer\n");
		printf("Press 6 to exit\n");
		scanf("%d",&choice1);
		switch(choice1)
		{
			case 1: game();
			break;
			case 2: calc();
			break;
			case 3: bookofthoughts();
			break;
			case 4: infobook();
			break; 
			case 5: timer();
			break;
			case 6:exit(1); 
		}
	}
}

void game()
{
            int choice, itemA,itemB,an=10,bn=10;
                        printf("*************************************\n");
            	        printf("**\tWELCOME TO THE GAME\t   **\n");
						printf("***\tTEST YOUR LUCK \t\t  ***\n");
						printf("*************************************\n");
						printf("NOTE:-\nPUT 10 NUMBERS INTO EACH OF THE PLAYER\n");
            while(1)
            {
                        printf("\n\n\n\nSELECT THE APPROPRIATE CHOICE TO PUSH NUMBERS : ");
                        printf("\n=>1.Push an Element to box A ");
                        printf("\n=>2.Push an element into box B");
                        printf("\n=>3.START GAME");
                        printf("\n=>4.VIEW GAME z");
                        printf("\n=>5.Exit");
                    
                        printf("\nEnter your choice: ");
                        scanf("%d", &choice);
                        switch(choice)
                        {
                                    case 1: if(an!=0)
                                           {
									        printf("\nEnter an element to be put into A: ");
                                            scanf("%d", &itemA);
                                            push_to_A(itemA);
                                            an=an-1;
                                            printf("Still %d elements are needed in box A\n",an);
                                           }
                                            else if(an==0)
                                            {
                                            	printf("BOX OF A IS FULL\n");
											}
                                            break;
                                    case 2: if(bn!=0)
                                    		{
									        printf("\nEnter an element to be put into B: ");
                                            scanf("%d", &itemB);
                                            push_to_B(itemB);
                                            bn=bn-1;
                                            printf("Still %d elements are needed in box B\n",bn);
                                            }
                                            else if(an==0)
                                            {
                                            	printf("BOX OF B IS FULL\n");
											}
                                             break;
                                    case 3:	if(A[topA]>B[topB])
											{
											 	pop_from_B();	
											}
											else if(A[topA]<B[topB])
											{
												pop_from_A();
											}
											else
											{
												printf("BOTH BOXS HAVE SAME NUMBER");
												pop_from_A();
												pop_from_B();
											}
                                            break;
                                    case 4: z();
                                    case 5: exit(1);
                                    default:printf("\nPlease enter valid choice ");
                                                 break;
                    }
            }
}

void push_to_A(int itemA)
{
            if(topA == MAX-1)
            {
             printf("\n~~~~ box of A is full~~~~");
            }
            else
            {
            topA = topA + 1;
            A[topA] = itemA;
            }
}

int pop_from_A()
{
            int itemA;
            if(topA == -1)
            {
                        printf("\n~~~~No more element in Box A ~~~~");
                        return -1;
            }
            itemA= A[topA];
            topA = topA - 1;
            return itemA;
}

void push_to_B(int itemB)
{
            if(topB == MAX-1)
            {
             printf("\n~~~~box of B is full~~~~");
             }
            else
            {
            topB = topB + 1 ;
            B[topB] = itemB;
            }
}

int pop_from_B()
{
            int itemB;
            if(topB == -1)
            {
                        printf("\n~~~~No more element in Box B~~~~");
                        return -1;
            }
            itemB = B[topB];
            topB = topB - 1;
            return itemB;
}

void z()
{
    if(topA>topB)
	{
		printf("A is much luckier than B");
	}
	else if(topA<topB)
	{
		printf("B is much luckier than A");
	}
	else
	{
		printf("Both has an average of same luckiness");
	}		
}

void calc() 
{
int choice=1, i, a, b;
float x, y, z;
while(choice!=0)
{
printf("\nSelect your operation :\n");
printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
printf("5. Square root\n6. X ^ Y\n7. X ^ 2\n8. X ^ 3\n");
printf("9. 1 / X\n10. X ^ (1 / Y)\n11. X ^ (1 / 3)\n");
printf("12. 10 ^ X\n13. X!\n14. (x*y)/100%\n15. log10(x)\n16. Modulus\n");
printf("17. Sin(X)\n18. Cos(X)\n19. Tan(X)\n20. Cosec(X)\n");
printf("21. Cot(X)\n22. Sec(X)\n23.exit\n");
printf("Choice: ");
scanf("%d", &choice);
if(choice!= 0);
switch(choice) {
case 1:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
z = x + y;
printf("\nResult: %f", z);
break;
case 2:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
z = x-y ;
printf("Result: %f", z);
break;
case 3:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
z = x * y;
printf("Result: %f", z);
break;
case 4:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
z = x / y;
printf("Result: %f", z);
break;
case 5:
printf("Enter X: ");
scanf("%f", &x);
z = sqrt(x);
printf("Result: %f", z);
break;
case 6:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
z = pow(x, y);
printf("Result: %f", z);
break;
case 7:
printf("Enter X: ");
scanf("%f", &x);
z = pow(x, 2);
printf("Result: %f", z);
break;
case 8:
printf("Enter X: ");
scanf("%f", &x);
z = pow(x, 3);
printf("Result: %f", z);
break;
case 9:
printf("Enter X: ");
scanf("%f", &x);
z = pow(x, -1);
printf("Result: %f", z);
break;
case 10:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
z = pow(x, (1/y));
printf("Result: %f", z);
break;
case 11:
printf("Enter X: ");
scanf("%f", &x);
y = 3;
z = pow(x, (1/y));
printf("Result: %f", z);
break;
case 12:
printf("Enter X: ");
scanf("%f", &x);
z = pow(10, x);
printf("Result: %f", z);
break;
case 13:
printf("Enter X: ");
scanf("%f", &x);
z = 1;
for(i = 1; i <= x; i++) 
{
z = z * i;
}
printf("Result: %.f", z);
break;
case 14:
printf("Enter X: ");
scanf("%f", &x);
printf("Enter Y: ");
scanf("%f", &y);
z = (x * y) / 100;
printf("Result: %.2f", z);
break;
case 15:
printf("Enter X: ");
scanf("%f", &x);
z = log10(x);
printf("Result: %.2f", z);
break;
case 16:
printf("Enter X: ");
scanf("%d", &a);
printf("Enter Y: ");
scanf("%d", &b);
z = a % b;
printf("Result: %d", z);
break;
case 17:
printf("Enter X: ");
scanf("%f", &x);
z = sin(x * 3.14159 / 180);
printf("Result: %.2f", z);
break;
case 18:
printf("Enter X: ");
scanf("%f", &x);
z = cos(x * 3.14159 / 180);
printf("Result: %.2f", z);
break;
case 19:
printf("Enter X: ");
scanf("%f", &x);
z = tan(x * 3.14159 / 180);
printf("Result: %.2f", z);
break;
case 20:
printf("Enter X: ");
scanf("%f", &x);
z = 1 / (sin(x * 3.14159 / 180));
printf("Result: %.2f", z);
break;
case 21:
printf("Enter X: ");
scanf("%f", &x);
z = 1 / tan(x * 3.14159 / 180);
printf("Result: %.2f", z);
break;
case 22:
printf("Enter X: ");
scanf("%f", &x);
z = 1 / cos(x * 3.14159 / 180);
printf("Result: %.2f", z);
break;
case 23: exit(1);
default:
printf("Invalid Choice!");
}
printf("Do you want to use claculator ? \n 1 for YES / 0 for NO:");
     scanf("%d",&choice);
}
}

int timer()
{ 
	unsigned int H=0;
	unsigned int M=0;
	unsigned int S=0;
	unsigned int MS=0;
	unsigned int totaltime=0,count_down_time_in_secs=0,time_left=0,X=0;
	clock_t x_startTime,x_countTime;
	printf("Enter the count down time in seconds\n");
	scanf("%d",&count_down_time_in_secs); 
    printf("Timer was set for %d seconds\n",count_down_time_in_secs);
 
    x_startTime=clock(); 
    time_left=count_down_time_in_secs-S; 
    
	while (time_left>0) 
	{
		x_countTime=clock();
		MS=x_countTime-x_startTime;
		S=(MS/(CLOCKS_PER_SEC))-(M*60);
		M=(MS/(CLOCKS_PER_SEC))/60;
		H=M/60;


	 

		time_left=count_down_time_in_secs-S;  
        if (time_left!=X)
        {
		    printf("Time left:::");
        	printf( " (%d) seconds\n",time_left);
		}
		 X=time_left;
	}

	printf( "\n\n\nTime's up\n\n\n");

return 0;
}

struct node
{
char name[100],city[100],rela[100];
long int phonenum;
struct node *link;
};
typedef  struct node *NODE;
NODE start = NULL;
int count=0;
void createinfo()
{
NODE snode,cur;
snode=(NODE)malloc(sizeof(NODE));
printf("enter name\nEnter city where person live\nRelation between you and person\nEnter Person mobile number\n");
scanf("%s%s%s%ld",snode->name,snode->city,snode->rela,&snode->phonenum);
    snode->link=NULL;
    if(snode==NULL)
    printf("error");
    if(start==NULL)
            start=snode;
        else
         {
        cur=start;
        while(cur->link!=NULL)
        cur=cur->link;
        cur->link=snode;
         }
    count++;
}

void  display()
{
   NODE cur;
   if(start==NULL)
   printf("No elements to dispaly\n");
   else{
   cur=start;
   printf("number of elements in list %d\n",count);
   while(cur!=NULL)
   {
    printf("%3s\n%3s\n%3s\n%3d\n",cur->name,cur->city,cur->rela,cur->phonenum);
    printf("\n");
    cur=cur->link;
   }}
}

int infobook()
{
    int op,ch;
    do{
        printf("-------Welcome to the Information book--------\n");
        printf("1.Create\n2.Display\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: createinfo();
            break;
            case 2: display();
            break;
            default:
            	printf("ENTER the VAlid number\n");
            	break;
        }
        printf("Do you want to quit ? 1 for no / 0 for yes:");
        scanf("%d",&op);
    }while(op!=0);
return 0;
}

int bookofthoughts()
{
	long int cd,cs=1;
	while(cs!=0)
    {
		printf("SELECT 1 to SET PIN\n");
		printf("SELECT 2 TO LOG IN\n");
		printf("SELECT 3 TO BACK UP PIN\n");
		printf("SELECT 4 TO EXIT\n");
		scanf("%ld",&cd);
		switch(cd)
			{
				case 1: set();
		        		break;
				case 2: getin();
		        		break;
				case 3: reset();
		        		break;
				case 4: exit(1);
	    		default :
		      		printf("ENTER VALID CHOICE\n");
			  		break;			
			}
			printf("ENTER 0 TO EXIT and 1 TO CONTNUE");
			scanf("%ld",&cs);
    }
    return 0;
}

void set()
{
	printf("WLECOME TO PERSONAL BOOK OF THOUGHTS\n");
	printf("SET PIN\nENTER THE PIN\n");
	printf("PIN should be a four digit number\n");
	scanf("%d",&pi);
	printf("SET SECRET questions to recover PIN\n");
	printf("HOW LONG YOU WANT TO LIVE (IN YEARS)\n");
	scanf("%d",&bc);
	printf("WHAT IS YOUR HEIGHT WHEN YOU STARTED WRITING THIS\n");
	scanf("%d",&ci);	    
}

void getin()
{
	int dc;
	printf("################ THIS IS PIN ENCRYPTED ##################\n");
	printf("ENTER THE PIN TO GET INTO YOUR THOUGHTS\n");
	scanf("%d",&dc);
	if(pi==dc)
	{
		printf("ACCESS GRANTED\n");
		addinfo();
	}
	else
	{
		printf("INCORRECT PIN\n");
		printf("ACCESS DENIED\n");
	}
}

void reset()
{
	int qq,ww;
	printf(":::::::: YOU SELECTED TO RESET PIN ::::::::\n");
	printf("ANSWER THE SECRET QUESTIONS TO RESET PIN\n");
	printf("HOW LONG YOU WANT TO LIVE (IN YEARS)\n");
	scanf("%d",&qq);
	if(bc==qq)
	{
		printf("WHAT IS YOUR HEIGHT WHEN YOU STARTED WRITING THIS\n");
		scanf("%d",&ww);
		if(ci==ww)
		{
			printf("ENTER THE PIN TO RESET\n");
			scanf("%d",&pi);
		}
		else
		{
			printf("Entered Height is incorrect");
		}
	}
	else
	{
		printf("Entered years are incorrect\n");
	}
}
void addinfo()
{
    FILE *f;
    printf("@@@ WELCOME @@@\n");
    f=fopen("D:\\Diary.txt","a");
   // if(f==NULL)
    //{
   // 	printf("Error in opening!!!!\n");
//	}
		
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
	    
} 
