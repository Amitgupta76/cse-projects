#include<stdio.h>
void main()
{
  int n,i,p;
  printf("\n enter the between 1 and 100");
  scanf("%d",&n);
  if(n>=1 && n<=100)
  {
  for(i=1;i<=10;i++)
  {
    p=n*i;
    printf("\n %d",p);
  }}
}
