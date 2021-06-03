#include<stdio.h>
void main()
{
int m,n,i;
printf("\n enter the values of m and n");
scanf("%d%d",&m,&n);
for(i=m;m<=n;m++)
{
  if(m%2==0)
  printf("\n %d is even number",m);
}
}
