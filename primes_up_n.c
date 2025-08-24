#include<stdio.h>
int main()
{
    int n,num=2,i,isprime;
    scanf("%d",&n);
    while(num<n)
    {
        isprime=1;
        i=2;
        while(i<=num/2)
        {
            if(num%i==0)
            {
            isprime=0;
            break;
            }
        
        i++;
        }
        
    
    if(isprime==1)
    {
        printf("%d",num);
    }
    num++;
}


}