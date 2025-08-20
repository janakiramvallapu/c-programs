#include<stdio.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    if(num<0)
    {
        printf("Invalid input. Program terminated.");
        return 0;
    }
    printf("Odd numbers up to %d: ",num);
    while(count<num)
    {
        count++;
        if(count%2!=0)
        {
             printf("%d ",count);
        }
    }
    return 0;

}