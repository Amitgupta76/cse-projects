#include<stdio.h>
void main()

{
float Fahrenheit,Celsius;
printf("\n Enter temperature in Fahrenheit: ");
scanf("%f" , &Fahrenheit);
Celsius=(Fahrenheit-32)*5/9;
printf("\n Celsius = %.3f",Celsius);
getch();
}
