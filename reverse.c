#include<stdio.h>
int main()
{
    int num,rev=0,digit;
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Invalid input");
        return 0;
    }
    label:
    if(num>0)
    {
        digit=num%10;//567 7 6 5
        rev=rev*10+digit;//765
        num=num/10;//0
        goto label;

    }
    printf("%d",rev);
    return 0;
}