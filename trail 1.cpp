#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>
#define MAX 2
int A[MAX],B[MAX];
int topA = -1;
int topB = -1;
void push_to_A(int itemA);
int pop_from_A();
void push_to_B(int itemB);
int pop_from_B();
void z();
void game();
void calc();
int timer();
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
			case 5: timer();
			break;
			case 6:exit(1); 
		}
	}
}
void game()
{
            int choice, itemA,itemB;
                        printf("*************************************\n");
            	        printf("**\tWELCOME TO THE GAME\t   **\n");
						printf("***\tTEST YOUR LUCK \t\t  ***\n");
						printf("*************************************\n");
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
                                    case 1: printf("\nEnter an element to be pushed into A: ");
                                            scanf("%d", &itemA);
                                            push_to_A(itemA);
                                             break;
                                    case 2: printf("\nEnter an element to be pushed into B: ");
                                            scanf("%d", &itemB);
                                            push_to_B(itemB);
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
}}
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
        	printf( " (%d)\n ",time_left);
		}
		 X=time_left;
	}


	printf( "\n\n\nTime's up\n\n\n");

return 0;
}
