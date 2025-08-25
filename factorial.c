#include<stdio.h>
int main()
{
    int num,i;
    long fact = 1;
    scanf("%d",&num);
    if(num<0)
    {
        printf("Invalid input Please enter a positive integer.");
        return 0;
    }
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d = %d\n",num,fact);
}