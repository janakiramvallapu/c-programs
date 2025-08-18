
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num<0)
    {
        printf("invalid");
        return 0;
    }
    label:
    if(num>=1)
    {
        printf("%d ",num);
        num--;
        goto label;
        
    }
    

    return 0;
}
