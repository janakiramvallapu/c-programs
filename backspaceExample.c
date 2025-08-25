#include<stdio.h>
int main()
{
    int num,i,sum=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
        printf("%d+",i);
    }
    printf("\b=%d",sum);
}