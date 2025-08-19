#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    switch(num1>num2)
    {
        case 1: printf("%d",num1);break;
        default: printf("%d",num2);break;
    }
}