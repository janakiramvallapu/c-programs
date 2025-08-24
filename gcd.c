#include<stdio.h>
int main()
{
    int a,b,i=1,gcd;
    scanf("%d %d",&a,&b);
    while(i<a&&i<b) // i<=a&&i<=b to pring every gcd
    {
         if(a%i==0&&b%i==0)
         gcd=i;    //printf("%d",i);
         i++;
    }
    printf("gcd = %d",gcd); //remove
    return 0;

    

}