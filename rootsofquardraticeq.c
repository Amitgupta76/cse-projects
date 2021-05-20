#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,D,x1,x2,realpart,imgpart;
printf("\n enter the coefficients a,b,c");
scanf("%f%f%f" , &a , &b , &c);
D = (b*b-4*a*c);
if (D>0)
{
 x1 = (-b+ sqrt(D))/(2*a);
 x2 = (-b- sqrt(D))/(2*a);
 printf("root1 = %.3f and root2 = %.3f" , x1 , x2);
}
else if(D=0)
{
x1 = -b/(2*a);
printf("both roots are equal to = %.3f" , x1);
}
else
{
 realpart = -b/(2*a);
 imgpart = sqrt(-D/(2*a));
 printf("root1 = %.3f+%.3fi and root2 = %.3f-%.3fi" , realpart,imgpart,realpart,imgpart);
}
getch();
}
