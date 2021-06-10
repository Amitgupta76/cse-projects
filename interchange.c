#include<stdio.h>
void main()
{
int a[50],large,small,n,i,min,max;
printf("enter the no of elements\n");
scanf("%d" , &n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
small=a[0];
large=a[0];
min=0;
max=0;
for(i=1;i<n;i++)
{
if(a[i]>large)
{
large=a[i];
max=i;
}
if(a[i]<small)
{
small=a[i];
min=i;
}
}
printf("the largest is%d and smallest is%d \n",large,small);
a[min]=a[min]+a[max];
a[max]=a[min]-a[max];
a[min]=a[min]-a[max];
printf("array after interchange is \n");
for(i=0;i<n;i++)
printf("%d \n" , a[i]);
}
