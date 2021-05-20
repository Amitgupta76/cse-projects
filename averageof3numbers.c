#include<stdio.h>
void main()
{
int a,b,c;
printf("\n enter the three integers ");
scanf("%d%d%d" , &a , &b , &c);
A = avg(a,b,c);
printf("average = %f" , A);
getch();
}
void avg(int p,int q,int r)
{
 float s;
 s=(p+q+r)/3.0;
 return(s);
}
