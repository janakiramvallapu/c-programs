#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    switch(num%2==0)
    {
        case 1: printf("Even"); break;
        default : printf("Odd"); break;
    }
}