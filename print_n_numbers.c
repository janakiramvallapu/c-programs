#include<stdio.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    label:
    if(count<num)
    {
        count++;
        printf("%d ",count);
        
        goto label; 
    }
    else if(num<0)
    {
    count=num;
    label2:
    if(count<=-1)
    {
        printf("%d",count);
        count++;
        goto label2;
    }
    else
    {
        return 0;
    }
    }
    return 0; 

}