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
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("The sum of the array:%d",sum);
	return 0;
}
	
	
	
	
		
	
