#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,result;
    scanf("%d",&n);
    while(i<n)
    {
        i++;
        result=pow(i,2);
        printf("%d ",result);
    }
    return 0;
}