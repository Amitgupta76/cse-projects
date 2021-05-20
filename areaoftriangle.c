#include<stdio.h>
#include<math.h>
void area(float p,q,r);
void main()
{
float a,b,c,Area;
printf("\n enter the lengths of the three sides of triangle");
scanf("%f%f%f" , &a , &b , &c);
Area = area(a,b,c);
printf("\n AREA = %.3f" , area);
getch();
}
void area(float p,q,r)
{
    float s=(p+q+r)/2;
    return(sqrt(s*(s-p)*(s-q)*(s-r));
}
