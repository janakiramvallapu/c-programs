#include<stdio.h>
int main()
{
    int num,count=1;
    scanf("%d",&num);
    if(num<0)
    {
        printf("Invalid input.");
        return 0;
    }
    printf("Even numbers up to %d are: ",num);
    while(count<num)
    {
        count++;
        if(count%2==0)
        {
            printf("%d ",count);
        }
    }
    return 0;
}