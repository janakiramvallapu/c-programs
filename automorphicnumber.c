#include<stdio.h>
int main()
{
    int num,square,rem;
    scanf("%d",&num);
    square=num*num;//625
   int isAuto=1;
   while(num!=0){
    
    if(square%10 != num%10){
        isAuto=0;
        break;
    }
    square/=10;
    num/=10;
   }
if(isAuto==1){
    printf("AutoMorphic");
}
else{
    printf("Not");
}


}