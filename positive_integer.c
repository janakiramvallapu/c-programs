#include<stdio.h>
int main()
{
    int num;
    do
    {
    printf("enter a positive integer : ");
    scanf("%d",&num);
    printf("Invalid! Please enter a positive number.\n");
    }
    while(num<=0);
    printf("Valid input: %d",num);
    return 0;
}