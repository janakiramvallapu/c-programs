#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    (num<0)?printf("negative"):(num==0)?printf("zero"):printf("positive");
    return 0;
}