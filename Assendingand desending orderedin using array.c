#include<stdio.h>
int main()
{
		int arr[20],i,j,n,temp;
		
		printf("Enter the any values");
		scanf("%d",&n);

		for(i=0;i<n;i++)
		{
				scanf("%d",arr[i]);
		}
		for(i=0;i<n;i++)
		{
				for(j=0;j<n;j++)
				{
						if(arr[i] > arr[j])
						{
							temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
						
				}
		}
		printf("Asending Order \n");
		for(i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(arr[j] < arr[i])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		printf("Dessending ordered");
		for(i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
}
