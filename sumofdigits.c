#include<stdio.h>
void main()
{
int m,sum=0,num;
printf("enter the number");
scanf("%d",&num);
while(num>0)
{
     m = num%10;
     sum = sum + m;
     num = num/10;
}
printf("the sum of digits is %d" , sum);
}
