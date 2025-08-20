#include<stdio.h>
int main()
{
    int num,r;
    scanf("%d",&num);
    if(num<0)
    {
        printf("-");num=-num;
    }
    while(num>0)
    {
        r=num%10;
        printf("%d",r);
        num=num/10;

    }
    return 0;
}