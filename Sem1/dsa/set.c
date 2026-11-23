#include <stdio.h>

int main()
{
	int A[5]={1,0,0,1,1};
	int B[5]={0,1,1,1,0};
	int i;
	
	printf("A u B:{");
	for(i=0;i<5;i++)
	{
		if(A[i] || B[i])
		{
			printf("%d\t",i+1);
		}
	}
	printf("}\n");
	
	printf("A n B:{");
	for(i=0;i<5;i++)
	{
		if(A[i] && B[i])
		{
			printf("%d\t",i+1);
		}
	}
	printf("}\n");
	
	printf("A -B:{");
	for(i=0;i<5;i++)
	{
		if(A[i] && !B[i])
		{
			printf("%d\t",i+1);
		}
	}
	printf("}\n");	
	
	printf("B - A:{");
	for(i=0;i<5;i++)
	{
		if(B[i] && !A[i])
		{
			printf("%d\t",i+1);
		}
	}
	printf("}\n");
}			
