#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    scanf("%d %d %c",&num1,&num2,&op);
    switch(op)
    {
        case '+' : printf("Addition is: %d",num1+num2); break;
        case '-' : printf("Subtraction is: %d",num1-num2); break;
        case '*' : printf("Multiplication is: %d",num1*num2); break;
        case '/' : printf("Division is: %d",num1/num2); break;
        case '%' : printf("Modulus is: %d",num1%num2); break;

    }
}