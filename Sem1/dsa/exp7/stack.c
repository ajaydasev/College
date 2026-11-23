#include<stdio.h>
#define MAX 10
int stack[MAX];
int top =-1;
	
	void push(int item)
	{
		if(top == MAX-1)
		{
			printf("\n Stack Overflow");
			return;
		}
		else
		{
			stack[++top]=item;
			printf("%d is pushed to stack",item);
		}
	}
	
	void pop()
		{
			if(top == -1)
			{
				printf("\n Stack Underflow");
				return;
			}
			else
			{
				
				printf("%d is poped to stack",stack[top]);
				top--;
			}
		}	
	
	void peek()
		{
			printf("%d is the top element",stack[top]);
		}
		
	void display()
		{
			if(top == -1)
			{
				printf("\n Stack Underflow");
				return;
			}
			else
			{	
				printf("Stack:");
				for(int i=top;i>=0;i--)
				{
					printf("\n %d",stack[i]);
				}
			}
		}
	
	int main()
		{
			int c,v;
			while(1)
				{
					printf("\nStack operations:");
					printf("\n1 - Push");
					printf("\n2 - Pop");
					printf("\n3 - Peek");
					printf("\n4 - Display");	
					printf("\n5 - Exit");
					printf("\n Enter option:");
					scanf("%d",&c);
					
					switch(c)
						{
							case 1:
								printf("\n Element:");
								scanf("%d",&v);
								push(v);
								break;
							case 2:
								pop();
								break;	
							case 3:
								peek();
								break;
							case 4:
								display();
								break;
							case 5:
								break;
							default:
								printf("\n Invalid choice!");	
						}
				}
			}
														
																
							


				
