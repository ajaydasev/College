#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	int sum=0;
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
	printf("Even numbers are:");
	for(i=0;i<n;i++)
	{
		if(arr[i] %2 == 0)
		{
			printf("%d\t",arr[i]);
		}	
	}
	printf("\n");
	printf("Odd numbers are:");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2 != 0)
		{
			printf("%d\t",arr[i]);
		}	
	}
	return 0;
}
	
	
