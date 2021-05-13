#include<stdio.h>
#include<math.h>
void main()
{
float x1, y1, x2, y2, distance;
printf("\nEnter the co ordinates of first point :");
scanf("%f%f", &x1, &y1);

printf("\n Enter the co ordinates of second point :");
scanf("%f%f", &x2, &y2);

distance= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("\n distance=%.3f", distance);
getch();
}
