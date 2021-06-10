#include<stdio.h>
void main()
{
int a[10],i;
float avg,n,sum=0;
printf("enter the no of elements");
scanf("%f",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum = sum + a[i];
}
avg = sum/n;
printf("average=%f",avg);
}
