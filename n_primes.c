#include<stdio.h>
int main()
{
    int n,i,num=2,count,isprime;
    scanf("%d",&n);
    if(n==0)
    {
        printf("Invalid input");
        return 0;
    }
    if(n<0)
    {
        printf("Invalid input. Please enter a positive number.");
        return 0;
    }
    printf("First %d prime numbers are:\n",n);
    for(count=0;count<n;)
    {
        isprime=1;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
            isprime=0;
            break;
            }
        }
        if(isprime==1)
        {
            printf("%d ",num);
            count++;
        }
        num++;
    }
    return 0;

}