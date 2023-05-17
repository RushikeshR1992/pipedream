#include<stdio.h>
int main()
{
			int choice,qut,total,price,rate;
		do
		{
			
			printf(" 1. Pizza Price = 180rs/pcs\n 2. Burger price = 100 rs/pcs \n 3. Dossa price = 120 rs/pcs \n 4. Idli price = 50 rs/pcs\n 5. Exit");
			printf("\nPle Enter Your Choice :");
			scanf("%d",&choice);
		
			switch(choice)
			{
			
				case 1:
					
						printf("\n You Have Selected PIZZA \n Enter the Quntity :");
						scanf("%d",&qut);
						rate=180;
						total=qut*rate;
						printf(" Total Amount :%d",total);
				break;
				
				
				case 2:
					
						printf("\nYou Have Selected Burger \n Enter the Quntity :");
						scanf("%d",&qut);
						rate=100;
						total=qut*rate;
						printf("\n Total Amount:- %d",total);
				break;
				
				case 3:
					
						printf("\nYou Have Selected Dosa \n Enter the Quntity :");
						scanf("%d",&qut);
						rate=100;
						total=qut*rate;
						printf("\n Total Amount :-%d",total);
						
				break;
				
				case 4:
					
						printf("\nYou Have Selected Idli \n Enter the Quntity :");
						scanf("%d",&qut);
						rate=50;
						total=qut*rate;
						printf("\n TOtal Amount :%d",total);
				break;
				
				default:
					printf("\nYour Choice Is Invalid Enter Again Properlly Choice\n");
					
				break;
				case 5:
					
						printf("Exit");
				break;
			}
		}
		while(choice!=5);
		
		return 0;
}
