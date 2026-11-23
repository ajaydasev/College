#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL;

void infirst()
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	if(newNode==NULL)
	{
		printf("No space\n");
		return;
	}
	printf("Enter the element to insert:");
	scanf("%d",&newNode->data);
	newNode->link=head;
	head=newNode;
	printf("%d inserted\n",newNode->data);
}	
	

void inlast()
{
	struct node *temp = head ,*newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	if(newNode==NULL)
	{
		printf("No space\n");
		return;
	}
	newNode->link=NULL;
		printf("Enter the element to insert:\n");
		scanf("%d",&newNode->data);
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=newNode;
	}
		printf("%d inserted\n",newNode->data);
}		
		
void inloc()
{
	int key;
	struct node *temp =head,*newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	if(newNode==NULL)
	{
		printf("No space\n");
		return;
	}
	printf("Enter the location you want to insert\n");
	scanf("%d",&key);
	while(temp!=NULL && temp->data!=key)
	{
		temp=temp->link;
	}
	if(temp==NULL)
	{
		printf("Value doesnt exist\n");
		return;
	}
	printf("Enter the element to insert:\n");
	scanf("%d",&newNode->data);
	newNode->link=temp->link;
	temp->link=newNode;
	printf("Element inserted %d",newNode->data);
}

void delfirst()
{
	struct node *temp=head;
	if(head==NULL)
	{
		printf("List empty\n");
		return;
	}
	head=temp->link;
	printf("%d deleted",temp->data);
	free(temp);
}

void dellast()
{
	struct node *temp=head,*prev=NULL;
	if(head==NULL)
	{
		printf("List empty\n");
		return;
	}
	if(temp->link==NULL)
	{
		printf("%d deleted",temp->data);
		head=NULL;
		free(temp);
		return;
	}
	while(temp->link!=NULL)
	{
		prev=temp;
		temp=temp->link;
		
	}
	printf("%d deleted",temp->data);
	prev->link=NULL;
	free(temp);
			
}

void delloc()
{
	int key;
	struct node *temp =head,*prev=NULL;
	if(head==NULL)
	{
		printf("List empty\n");
		return;	
	}
	printf("Enter the location you want to insert\n");
	scanf("%d",&key);
	if(head->data==key)
	{
		head=head->link;
		printf("%d deleted\n",temp->data);
		free(temp);
		return;	
	}
	while(temp!=NULL && temp->data!=key)
	{
		prev=temp;
		temp=temp->link;
	}
	if(temp==NULL)
	{
		printf("Value does't exist\n");
		return;
	}
	prev->link=temp->link;
	printf("%d deleted\n",temp->data);
	free(temp);
			
}

void search()
{
	struct node *temp =head;
	int pos=0,found=0,val;
	if(head==NULL)
	{
		printf("\nEmpty list\n");
		return;
	}
	printf("Enter value:\n");
	scanf("%d",&val);
	while(temp!=NULL)
	{
		if(temp->data==val)
		{
			printf("%d is found at the position %d.",temp->data,pos+1);
			found=1;
		}
		pos++;
		temp=temp->link;
	}
	if(!found)
	{
		printf("Value %d not exist",val);
		
	}
}

void display()
{
	struct node *temp =head;
	if(head==NULL)
	{
		printf("\nEmpty list\n");
		return;
	}
	printf("\nList:\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}

int main()
{
	int choice; 
	while(1)
	{
		printf("\n List operations:\n");
			printf("1.Insert first\n");
			printf("2.Insert lastt\n");
			printf("3. Delete first\n");
			printf("4. Delete last\n");
			printf("5. Insert location\n");
			printf("6. Delete location\n");
			printf("7. Display \n");
			printf("8.Search\n");
			printf("9.Exit\n");
			printf("Enter your choice:\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1: infirst();
					break;
				case 2: inlast();
					break;	
				case 3: delfirst();
					break;	
				case 4: dellast();
					break;
				case 5: inloc();
					break;
				case 6: delloc();
					break;
				case 7: display();
					break;
				case 8: search();
					break;
				case 9: printf("Existing the program");
					return 0;
				default: printf("Invalid choice\n");	
			}
	}
	return 0;	
}		
				
								
				
				
		
			
	
		
	
		
		
	
		
	


	
					
	 


					
	
