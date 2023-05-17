//ARITHMATIC OPERATOR IN USING 2DIMENSIONAL ARRAY 
#include<stdio.h>
int main()
{
		int a[3][3],b[3][3],add[3][3],sub[3][3],mul[3][3],div[3][3],mod[3][3],i,j;
		int c,r;
		
		printf("Enter the Value of Row");
		scanf("%d",&r);
		
		printf("Enter the value of colum");
		scanf("%d",&c);
		
	//	printf("Enter the elements\n");
		
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
					printf("Enter the 1st Matrix");
					scanf("%d",&a[i][j]);
			}
			
		}
		printf("\n");
		 	for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{	
					printf("Enter the 2nd Matrix");
					scanf("%d",&b[i][j]);
				}	
 			}
		 for(i=0;i<r;i++)
		 {
		 		for(j=0;j<c;j++)
		 		{
		 				add [i] [j] = a [i] [j] + b [i] [j];
		 				sub [i] [j] = a [i] [j] - b [i] [j];
		 				mul [i] [j] = a [i] [j] * b [i] [j];
						div [i] [j] = a [i] [j] / b [i] [j];
						mod [i] [j] = a [i] [j] % b [i] [j]; 
				}
		 }
		 for(i=0;i<r;i++)
		 {
		 	for(j=0;j<c;j++)
		 	{
		 			printf("%d",add[i][j]);
		 			printf("%d",sub[i][j]);
		 			printf("%d",mul[i][j]);
		 			printf("%d",div[i][j]);
		 			printf("%d",mod[i][j]);
			 }
			 printf("\n");
		 }
		 
}
