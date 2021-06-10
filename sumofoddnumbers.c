#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("enter the no of elements");
scanf("%d" , &n);
for(i=1;i<=n;i+=2)
{
    sum=sum+ i*i;
}
printf("the sum is %d" , sum);
}

