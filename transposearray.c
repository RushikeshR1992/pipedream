#include<stdio.h>
int main()
{
		int c,r,i,j,matrix[10][10],transpose[10][10];
		
			printf("Enter the Row and Column");
			scanf("%d%d",&r,&c);
		
			printf("Enter the matrix");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
						scanf("%d",&matrix[i][j]);
				}
			}		
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
						transpose[j][i]=matrix[i][j];
				}
			}
			for(i = 0 ; i < c ; i ++)
			{
			
				for(j = 0; j < r ;j ++)
				{
					printf("%d\t",transpose[i][j]);		
				}
				printf("\n");
			}
			
}

