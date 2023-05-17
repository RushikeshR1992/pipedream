#include<stdio.h>
 
 float add(float a,float b)
 {
 	int total;
    total =(int)a+(int)b;
 	printf("Addition: %d",total);
 }
 int sub(int a,int b)
 {
 	int total;
 	total =a-b;
 	printf("Substraction: %d",total);
 }
 
 int mul(int a,int b)
 {
 	int total;
 	total =a*b;
 	printf("Multiplication: %d",total);
 }
 
 int div(int a,int b)
 {
 	int total;
 	total =a/b;
 	printf("Division: %d",total);
 }
 
 main()
 {
 	int choice;
 	printf("=========MENU==========\n");
 	printf("\n1.Addition \n2.Substraction \n3.Multiplcation \n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    
    if(choice==1)
    {  
        printf("your have enter 1.Addition\n");
    	int n1,n2;
    	printf("Enter one number:\n");
    	scanf("%d",&n1);
    	printf("Enter second number:\n");
    	scanf("%d",&n2);
    	
    	//calling
    	
    	add(n1,n2);
    
	}
	
	else if(choice==2)
	{
	printf("your have enter 2.Substraction\n");
    	int n1,n2;
    	printf("Enter one number:\n");
    	scanf("%d",&n1);
    	printf("Enter second number:\n");
    	scanf("%d",&n2);
    	
    	//calling
    	
    	sub(n1,n2);	
	}
	else if(choice==3)
	{
	printf("your have enter 3.Multiplication\n");
    	int n1,n2;
    	printf("Enter one number:\n");
    	scanf("%d",&n1);
    	printf("Enter second number:\n");
    	scanf("%d",&n2);
    	
    	//calling
    	
    	mul(n1,n2);	
	}
	else if(choice==4)
	{
	    printf("your have enter 2.Substraction\n");
    	int n1,n2;
    	printf("Enter one number:\n");
    	scanf("%d",&n1);
    	printf("Enter second number:\n");
    	scanf("%d",&n2);
    	
    	//calling
    	
    	div(n1,n2);	
	}
	
	else
	{
		printf("Invalid number");
	}
	
   
 }
 
 

