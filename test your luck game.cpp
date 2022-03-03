#include<stdio.h>
#include<stdlib.h>
#define MAX 2
int A[MAX],B[MAX];
int topA = -1;
int topB = -1;
void push_to_A(int itemA);
int pop_from_A();
void push_to_B(int itemB);
int pop_from_B();
void result();
int main()
{
            int choice, itemA,itemB;
            while(1)
            {
                        printf("\n\n\n\nSELECT THE APPROPRIATE CHOICE TO PUSH NUMBERS : ");
                        printf("\n=>1.Push an Element to box A ");
                        printf("\n=>2.Push an element into box B");
                        printf("\n=>3.START GAME");
                        printf("\n=>4.VIEW GAME RESULT");
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
                                    case 4: result();
                                    case 5: exit(1);
                                    default:printf("\nPlease enter valid choice ");
                                                 break;
                    }
            }
    return 0;
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
void result()
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
