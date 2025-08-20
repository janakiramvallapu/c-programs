#include<stdio.h>
int main()
{
    int value;
    char first='A';
    printf("Character and its ASCII value:\n");
    while(first<='z')
    {
        printf("%c: %d\n",first,first);
          first++;
    }


}