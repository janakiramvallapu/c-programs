#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total;
    float percentage;
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    if(s1>100||s2>100||s3>100||s4>100||s5>100)
    {
        printf("invalid marks");
    }
    if(s1<35||s2<35||s3<35||s4<35||s5<35)
    {
        printf("Fail");
        return 0;
    }
    total=s1+s2+s3+s4+s5;
    percentage=total/5.0;//90

    printf("Total Marks: %d\n",total);
    printf("Percentage: %.2f%%\n",percentage);

  
 
    switch((int) percentage)
    {
        case 90 ... 100 : printf("Grade: A");break;
        case 75 ... 89 : printf("Grade: B");break;
        case 50 ... 74 : printf("Grade: C");break;
        case 35 ... 49 : printf("Grade: D");break;
    }
    

    
    

}