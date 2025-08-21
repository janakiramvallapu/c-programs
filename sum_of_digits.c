#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    scanf("%d",&num);
    if(num<0)
    {
        printf("-");
        num=-num;
    }
    while(num>0)
    {
        rem=num%10;//568
        sum+=rem;
        num=num/10;

    }
    printf("%d",sum);
    return 0;
}