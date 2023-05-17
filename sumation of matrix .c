//Arithmatic operator using fuction and Using Matrix
#include<stdio.h>
int matrix(int a[20][20], int b[20][20])
{
	
		int i,j,c,r,sum[50][50];
		
		for(i=0;i<c;i++)
		{
				for(j=0;j<r;j++)
				{
					sum[i][j]=sum[i][j]+(a[i][j],b[i][j]);	
				}
				printf("\n");
		}
		for(i=0;i<r;i++)
		{
				for(j=0;j<c;j++)
				{
					printf("Suamtion Of matrix %d",sum);
				}
		}
	
}
int main()
{
	
		int a[20][20],b[20][20],n,r,c,i,j;
		
		printf("Enter the Value Size");
		scanf("%d",&n);
		
		printf("Enter the value of matrix size");
		for(i=0;i<n;i++)
		{
				for(j=0;j<n;j++)
				{
						scanf("%d %d",&r,&c);
				}
		}
			matrix(a,b);			
}
	
