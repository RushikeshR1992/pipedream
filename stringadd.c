#include<stdio.h>
int main()
{
	int arr[3],i,sum,a;
	printf("enter the number:");
	scanf("%d",&a);
	
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		sum=sum+arr[i];
	}
	
	for(i=0;i<a;i++)
	{
		printf("%d",arr[i]);
	}
	
	printf("\n");
	
	
}
