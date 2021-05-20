#include<stdio.h>
void small(int p, int q,int r);
void main()
{
int a,b,c;
printf("\n Enter the three numbers:");
scanf("%d%d%d", &a,&b,&c);
small(a,b,c);
getch();
}
void small(int p,int q,int r)
{
if(p<q && p<r)
printf("smallest = %d" , p);
else if(q<r)
printf("smallest = %d" , q);
else
printf("smallest = %d" , r);
}
