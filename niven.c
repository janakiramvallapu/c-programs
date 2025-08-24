#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    scanf("%d",&num);
    int temp;
    temp=num;//1729
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;//
        num=num/10;
    }
    if(temp%sum==0)
    {
        printf("niven");
    }
    else
    {
        printf(" not niven");
    }
    return 0;


}