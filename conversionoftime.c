#include<stdio.h>
void main()
{
int hrs,min,inmin;
printf("Enter the no of hours and minutes");
scanf("%d%d" , &hrs , &min);
inmin = convert(hrs,min);
printf("time after conversion is %d minutes" ,inmin );
getch();
}
int convert(int h,int m)
{
int x;
x = h*60 + m;
return(x);
}
