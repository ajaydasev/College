#include <stdio.h>
int main()
{
	int i,j,n1,n2,temp;
	int c[100];
	printf("Enter the number of elements in the first array:");
	scanf("%d",&n1);
	int a[n1];
	printf("Enter the elements:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of elements in the second array:");
	scanf("%d",&n2);
	int b[n2];
	printf("Enter the elements:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n2;i++)
	{
		c[n1+i]=b[i];
	}
	int n =n1+n2;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",c[i]);
	}
	return 0;
}	
	
