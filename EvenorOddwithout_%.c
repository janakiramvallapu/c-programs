//Even or Odd (without %, just using division/remainder trick)
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int temp=num;
    label:
    if(temp>=2)
    {
        temp=temp-2;
        goto label;
    }
    else if(temp==0)
    {
        printf("even");

    }
    else
    {
        printf("odd");
    }
    return 0;
   
    
}