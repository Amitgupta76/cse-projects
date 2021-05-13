#include<stdio.h>
void main()
{
int a,b,c;
float avg;
printf("\n enter the three numbers: ");
scanf("%d%d%d" ,&a, &b, &c);
avg = (a+b+c)/3;
printf("\n AVERAGE = %.3f" , avg);
getch();
}
