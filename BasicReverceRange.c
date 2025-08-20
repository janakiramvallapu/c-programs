#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num2>num1)
    {
        printf("Invalid input. N1 should be greater than or equal to N2.");
        return 0;
    }
    if(num1==num2)
    {
        printf("%d",num1);
        return 0;
    }
    while(num1>=num2)
    {
    printf("%d",num1);
    if(num1>num2) printf(",");
    num1--;
    }
    return 0;
}