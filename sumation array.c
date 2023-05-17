//sumation of ARRAY USING SIZE IN "10"NUMBERS IT CAN BE 1+2+3+4+5+6+7+8+9+10=55.
#include<stdio.h>
int main()
{
		int a[10],i,sum=0,n;
		printf("Enter the numbers");
		scanf("%d",&n);
		printf("Enter The Any Numbers:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);	
		}
		printf("========\n");
		
		printf("Sum of Array\n");
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		printf("%d",sum);
			
}
