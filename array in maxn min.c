#include<stdio.h>
#include<conio.h>
int main()
{
			int a[5000],i;
			int n,min,max;
		
			printf("Enter the N NUmbers");
			scanf("%d",&n);
			
				printf("Enter The Elementd");
				for(i=1;i<n;i++)
				{
						scanf("%d",&a[i]);
				}
				min=max=a[i];
				for(i=1;i<a[i];i++)
				{
					if(min>a[i])
					min=a[i];
					if(max<a[i])
					max=a[i];
				}
				
				printf("minimum of Array =%d",min);
				
				printf("maximum no of array=%d",max);
				
		
}
