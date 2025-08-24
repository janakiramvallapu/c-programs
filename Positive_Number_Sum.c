#include<stdio.h>
int main()
{
    int num,sum=0;
    do
    {
        printf("Enter Number");
        scanf("%d",&num);
        sum=sum+num;
    }
     while(num!=0);
     if(num==0)
     {
     printf("Sum of positive numbers: %d",sum);
     return 0;
     }
return 0;
}