#include<stdio.h>
#include<stdlib.h>

struct node{
		int data;
		struct node *link;
		};
	struct node *top = NULL;
	void push()
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode == NULL)
		{
			printf("\n No space available\n");
			return; 
		}
		printf("\n Enter element:");
		scanf("%d",&newnode->data);
		newnode->link=top;
		top=newnode;
		printf("\n %d inserted successfully ",newnode->data);
	}
	void pop()
	{
		struct node *temp = top;
		if(top == NULL)
		{
			printf("Underflow!!");
			return;
		}
		else
		{
			printf("\n %d popped",temp->data);
			free(temp);
		}x
	}
	void peek()
	{
		struct node *temp = top;
		if(top == NULL)
		{
			printf("Underflow!!");
			return;
		}
		else
		{
			printf("\n %d is the top element",temp->data);
		}
	}
	void display()
	{
		struct node *temp = top;	
		if(top == NULL)
		{
			printf("Underflow!!");
			return;
		}
		else
		{
			printf("Elements in the stack are :\n");
			while(temp != NULL)
			{
				printf("%d ",temp->data);
				temp=temp->link;
			}	
		}
	}
	void search()
	{
		struct node *temp = top;
		int key,found=0;
		if(top == NULL)
		{
			printf("Underflow!!");
			return;
		}
		else
		{
			printf("\n Enter the element to search:");
			scanf("%d",&key);
			while(temp != NULL)
			{
				if(temp->data==key)
				{
					printf("\n %d found \n",temp->data);
				}
				found=1;
				temp=temp->link;
			}
			if(!found)
			{
				printf("\n %d not found \n",key);
			}
		}
		
				
	}
int main()
{
	int choice; 
	while(1)
	{
		printf("\n Stack operations:\n");
			printf("1.Push\n");
			printf("2.Pop\n");
			printf("3.Peek\n");
			printf("4. Search\n");
			printf("5. Display\n");
			printf("6.Exit\n");
			printf("Enter your choice:\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1: push();
					break;
				case 2: pop();
					break;	
				case 3: peek();
					break;	
				case 4: search();
					break;
				case 5: display();
					break;
				case 6: printf("Existing the program");
					return 0;
				default: printf("Invalid choice\n");	
			}
	}
	return 0;	
}		
				
								
				
				
		
			
	
		
	
		
		
		
	
	
			
