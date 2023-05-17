//Electrician bill
#include<stdio.h>
#include<string.h>
int main()
{
		int QTY,tv_qty,vcr_qty,remote_qty,lcd_qty,sold_qty,amt;
		int tv_tot,vcr_tot,remote_tot,lcd_tot,sold_tot,total,sub_tot,bill_amount;
		
		int	tv_price=800,vcr_price=678,remote_price=400,lcd_price=987,tax,tax_rate=8;
		char name[20],cname[20];
		
		
			printf("Welcome To Electronics StoreBilling System\n");

			printf("Please Enter Following Details\n");
			
			printf("Enter the casier name:\n");
			scanf("%s",&name);

			printf("Enter the customer name:\n");
			scanf("%s",&cname);	
		
			printf("**** Enter 0 for done****\n");
			
			printf("How Many TVs Sold\n");
			scanf("%d",&tv_qty);

			printf("How Many VCRs were Sold\n");
			scanf("%d",&vcr_qty);
			
			printf("How Many Remote Controllers Sold\n");
			scanf("%d",&remote_qty);
			
			printf("How Many LCDs were Sold\n");
			scanf("%d",&lcd_qty);			
		
			printf("\n Press Any Key To Generate Bill");	
			getch();  // single character

			printf("\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t");
			
				int a;
   			for(a=1;a<8;a++) // Change 'a<?' to how many * you want
			{
				Sleep(500);    // 0.5sec 
				printf("...");
			}
      		printf("\n\n\t\t\t\t\tBill Generated. \n\n");
      
    			system("PAUSE");   // console pause
      			system("CLS");      // console clear

					//	calcualtion
			tv_tot = tv_qty * tv_price;
			vcr_tot = vcr_qty * vcr_price;
			remote_tot = remote_qty * remote_price;
			lcd_tot = lcd_qty * lcd_price;
			//sub total calculation
			sub_tot=total+amt;
			//sub totoal calculation
			sub_tot=tv_qty+vcr_qty+remote_qty+lcd_qty;
				//tex calculation
				
			
			sold_tot = tv_tot + vcr_tot + remote_tot + lcd_tot;
			tax = (sold_tot * tax_rate)/100;
			bill_amount= sold_tot + tax;
						//print the bill
			
			printf("===================================\n");
			printf("\t Electronics Store Bill\n");
			printf("===================================\n");
			printf("Qty \t Decription \t Unit Price$ \t Total price$\n");
			printf("--- \t ---------- \t ----------- \t ------------\n");
			printf("%d \t TV \t\t   800 \t           %d \n",tv_qty,tv_tot);
			printf("%d \t VCR\t\t   678             %d \n",vcr_qty,vcr_tot);
			printf("%d \t REMOTE\t\t   400             %d \n",remote_qty,remote_tot);
			printf("%d \t LCD\t\t   987             %d \n",lcd_qty,lcd_tot);
			printf("\t\n\n                  \t\t       sub total %d ",sub_tot);
			printf("\t\n\n                   \t\t       tax %d ",tax);
			printf("\t\n\n                    \t\t       subtotal  %d",sold_tot);
			printf("\t\n\n                    \t\t       Bill Amount  %d ",bill_amount);
				printf("\t\t\t\t\t\tEnd of bill\n\n");

			system("PAUSE");
			system("CLS");  // clear
			return 0;			
			


}
