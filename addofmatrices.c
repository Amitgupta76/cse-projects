#include<stdio.h>
int main()
{
int mat1[10][10],mat2[10][10],sum[10][10];
int r1,r2,c1,c2,r,c,i,j;
printf("enter the row size and col size of 1st matrix");
scanf("%d%d",&r1,&c1);
printf("enter the row size and col size of 2nd matrix");
scanf("%d%d",&r2,&c2);
if(r1==r2 && c1==c2)
{r=r1;
c=c1;
printf("enter the elements of 1st matrix");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&mat1[i][j]);
printf("enter the elements of 2nd matrix");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&mat2[i][j]);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
sum[i][j] = mat1[i][j] + mat2[i][j];
printf("the elements of resultant matrix are \n");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
    printf("\t %d",sum[i][j]);
if(j==c-1)
    printf("\n");
}}
else
printf("row size and col size must be equal");
return 0;
}
