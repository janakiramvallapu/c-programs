#include <stdio.h>

int main()
{
    int num,count=0;
    scanf("%d",&num);
    if(num<0)
    {
        printf("invalid");
        return 0;
    }
    label:
    count++;
    if(count%2!=0)
    {
    printf("%d ",count);
    }
    if(count<num)
    {
        goto label;
    }
    

    return 0;
}
