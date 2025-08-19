#include<stdio.h>
#include<stdlib.h>
int main()
{
    int op,q,price;
    abc:
    printf("---------------------------\n");
    printf("Menu :-\n -------\n 1. Pizza - $10\n 2. Burger - $7\n 3. Pasta - $8\n 4. Salad - $5\n 5. Exit\n");
    label:
    printf("Enter your choice: ");
    scanf("%d",&op);
    if(op>5&&op<1)
    {
    printf("choose the right option");
    goto label;
    }
    if(op==5)
    {
        printf("Exiting the program. Thank you!");
        exit(0);
    }
    printf("Enter the quantity");
    scanf("%d",&q);
    
    switch(op)
    {
        case 1: printf("You selected Pizza. Price: $%d\n\n",price=10*q); break;
        case 2: printf("You selected Burger. Price: $%d\n\n",price=7*q); break;
        case 3: printf("You selected Pasta. Price: $%d\n\n",price=8*q); break;
        case 4: printf("You selected salad. Price: $%d\n\n",price=5*q); break;
        
    }
    goto abc;
   


}