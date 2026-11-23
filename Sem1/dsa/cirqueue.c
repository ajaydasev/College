#include <stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;


void enqueue()
{
	int value;
	if(rear+1%MAX== front)
	{
		printf("Queue is full");
	}
	else
	{	printf("Enter element to be inserted:");
		scanf("%d",&value);
		if(front==-1 || front==0)
		{
			front=0;
			rear=rear+1%MAX;
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
			front=front+1%MAX;
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
 	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");
	}
	else
	{	
		do
		{
			printf("%d\t",queue[i]);
			i=(i+1)%MAX;
		}while(i!=(rear+1)%MAX);
	}		
}

void search()
{
	int key,i,found=0;
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");
	}
	else
	printf("Enter element to search:");
	scanf("%d",&key);
	i=front;
	do
	{
		if(queue[i]==key)
		{
			printf("\nElement %d found at postion %d\n",key,i);
			found=i;
			break;
		}
		i=(i+1)%MAX;
	}
	while(i!=(rear+1)%MAX);
	if(!found)
	{
		printf("\nElement %d  not found",key);
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
		printf("\n5.Serach");
		printf("\n6.Exit");
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
			search();
			break;
			
			case 6:
			printf("Exiting the program");
			break;
			
			default:
			printf("Invalid choice");
			break;
		}
	}
}
														
				
