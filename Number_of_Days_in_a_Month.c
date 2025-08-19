#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>12)
    {
        printf("Invalid month number");
        return 0;
    }
    switch(num)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("31 days"); break;
        case 2: printf("28 or 29 days (depending on leap year)"); break;
        default: printf("30 days");
    }
}