#include<stdio.h>
#include<math.h>
int main()
{
    int num,i=0,rem,armstrong=0,original,pow=1;
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        i++;
        num=num/10;
    }
    num=original;
    while(num!=0)
    {
        rem=num%10;
        int j=0;
        while(j<i)
        {
            pow=pow*rem;
        }
        armstrong=armstrong+pow;
        num=num/10;
    }
    if(original==armstrong)
    printf("armstrong");

    
    return 0;
}