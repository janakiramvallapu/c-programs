#include<stdio.h>
int main()
{
    int num,i,isprime;
    scanf("%d",&num);
    if(num<0)
    {
        printf("Invalid input. Enter a positive integer.");
        return 0;
    }
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            isprime=0;
            break;
        }
        isprime=1;
    }
    if(isprime==1)
    {
        printf("%d is a prime number.",num);
    }
    else
    {
        printf("%d is not a prime number.",num);
    }
}