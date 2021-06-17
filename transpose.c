#include<stdio.h>
void main()
{
int a[10][10],t[10][10];
int r,c,i,j;
printf("enter the row size and col size of the matrix");
scanf("%d%d",&r,&c);
printf("enter the elements of the matrix");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
printf("entered matrix is\n");
for(i=0;i<r;i++)
{
printf("\n");
for(j=0;j<c;j++)
printf("\t %d",a[i][j]);
}
for(i=0;i<r;i++)
for(j=0;j<c;j++)
t[j][i] = a[i][j];
printf("\n transpose matrix is");
for(i=0;i<c;i++)
{
printf("\n");
for(j=0;j<r;j++)
printf("\t %d",t[i][j]);
}
}

