//maximum no and minimum no using user defind fuction
#include<stdio.h>
int maxmin(int a[] ,int n)
{
		int min,max,i;
		min=max=a[i];
		for(i=0;i<n;i++)
		{
				if(min>a[i])
					min=a[i];
				if(max<a[i])
					max=a[i];
		}
		printf("Minimum No=%d\n",min);
		printf("Maximum No=%d",max);
}
int main()
{
			int a[1000],i,n;
			
				printf("Enter the Any Elsements ");
				scanf("%d",&n);
				
				printf("Enter the elsements\n");
				
				for(i=0;i<n;i++)
				{
						scanf("%d",&a[i]);
				}
				maxmin(a,n);
}		
