#include<stdio.h>
int main()
{
int X,P,sum=0;
scanf("%d %d",&X,&P);
sum=X;
while(X>0)
{
 X=X*(100-P)*100;
 sum=sum+X;
 }
 printf("%d",sum);
 return 0;
 }
