#include<stdio.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    while(num<0)
    {
            printf("%d",num);
            num++;
    }
    while(count<num)
    { 
        if(num>0)
        {
        count++;
        printf("%d",count);
        }
    }
    return 0;


}