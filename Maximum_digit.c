#include<stdio.h>
int main()
{
    int max=-9,min=9,rem,num;
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        if(rem>max)
        {
            max=rem;
        }
    }
    printf("%d",max);

}