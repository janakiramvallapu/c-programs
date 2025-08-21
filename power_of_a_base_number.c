#include<stdio.h>
#include<math.h>
int main()
{
    int base,exponent;
    double result;
    printf("Enter Base : "); scanf("%d",&base);
    printf("Enter Exponent "); scanf("%d",&exponent);
    if(base<=0||exponent<=0)
    {
        printf("Invalid input...Please enter positive values");
        return 0;
    }
    result=pow(base,exponent);
    printf("%d^%d=%.0f\n",base,exponent,result);
    return 0;
}