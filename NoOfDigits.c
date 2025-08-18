#include<stdio.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    label:
    if(num>0)
    {
        num=num/10; 
        count++;
        goto label;
    }
    printf("last digits : %d",count);
    return 0;

}