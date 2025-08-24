#include<stdio.h>
int main()
{
    int num,square,rem,sum=0;
    scanf("%d",&num);
    square=num*num;
    while(square!=0)
    {
        rem=square%10;//81
        sum=sum+rem;
        square=square/10;
    }
    if(sum==num)
    {
        printf("Neon");
    }
    else
    {
        printf("Not Neon");
    }
    return 0;
}