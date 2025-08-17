#include<stdio.h>
int main()
{
    long num1,num2;
    printf("Enter two numbers:");
    scanf("%ld %ld",&num1,&num2);
    if(num1>num2)
    {
    printf("%ld",num1);
    }
    else
    {
    printf("%ld",num2);
    }
    return 0;
    
}