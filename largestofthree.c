#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    (num1>num2&&num1>num3)?printf("%d",num1):(num2>num1&&num2>num3)?printf("%d",num2):(num1==num2&&num2==num3)?printf("all are equal"):printf("%d",num3);
    return 0;
}