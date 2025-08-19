#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch>='A'&&ch<='Z')
    {
        case 1: printf("UpperCase");break;
        default : printf("LowerCase");break;
    }
    return 0;

}