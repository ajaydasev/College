#include <stdio.h>
int main()
{
	int i,n,s;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	int sum=0;
	int found=0;
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("Enter the elements to search:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(arr[i] == s)
		{
			printf("The element is at %d",i+1);
			found++;
			
		}
	}
	printf("\n");
	if(found == 0)
	{
		printf("The element is not in the array");
	}	
	
	
 return 0;	
}	
	
