#include <stdio.h>
#define MAX 100
int queue[MAX];
int front=-1,rear=-1;


void enqueue()
{
	int value;
	if(rear==MAX-1)
	{
		printf("Queue is full");
	}
	else
	{	printf("Enter element to be inserted:");
		scanf("%d",&value);
		if(front==-1 || front ==0)
		{
			front=0;
			rear++;
			queue[rear]=value;
			printf("\n %d inserted into queue",queue[rear]);
		}
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");
	}
	else
	{	
		printf("%d is deleted from queue",queue[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}	
		else
		{	
			front++;
		}			
	}
}

void peek()
{
	if(front==-1 && rear==1)
	{
		printf("Queue is empty");
	}
	else
	{	
		printf("Front:%d",queue[front]);
	}
}
 void display()
 {
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		for(int i = front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}

int main()
{
	int choice;
	while(1)
	{
		printf("\n---Queue operations---");
		printf("\n1.Enqueue");
		printf("\n2.Dequeue");
		printf("\n3.Peek");
		printf("\n4.Display");
		printf("\n5.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			enqueue();
			break;
			
			case 2:
			dequeue();
			break;
			
			case 3:
			peek();
			break;
			
			case 4:
			display();
			break;
			
			case 5:
			printf("Exiting the program");
			break;
			
			default:
			printf("Invalid choice");
			break;
		}
	}
}
														
				
