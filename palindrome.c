#include<stdio.h>
int main()
{
    int num,rem,rev=0,temp;
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;//567
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==temp)
    {
    printf("number is palindrome");
    }
    else
    {
        printf("number is not a palindrome");
    }
return 0;
}