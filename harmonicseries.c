#include<stdio.h>
int main()
{
    int n;
    float sum=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
        printf("1/%d+",i);
    }
    printf("\b=%.2f",sum);
}