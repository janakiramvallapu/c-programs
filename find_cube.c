#include<stdio.h>
int main()
{
    int num,i,cube;
    scanf("%d",&num);
    if(num<0)
    {
        printf("Negative value not allowed.");
        return 0;
    }
    for(i=1;i<=num;i++)
    {
        cube=i*i*i;
        printf("Number is : %d and cube of the %d is :%d\n",i,i,cube);

    }
}