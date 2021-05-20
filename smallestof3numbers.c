#include<stdio.h>
void small(int p, int q,int r);
void main()
{
int a,b,c;
printf("\n Enter the three numbers:");
scanf("%d%d%d", &a,&b,&c);
S = small(a,b,c);
printf("smallest = %d" , S)
getch();
}
void small(int p,int q,int r)
{
if(p<q && p<r)
return(p);
else if(q<r)
return(q);
else
return(r);
}
