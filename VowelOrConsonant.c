#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        ch=ch+32;
    }
    switch(ch)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        printf("Vowel"); break;
        default :
        if(ch>='a'&&ch<='z')
        {
            printf("Consonant");
        }
        else
        {
            printf("Invalid input");
        } 
    }
    return 0;
}