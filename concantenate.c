#include<stdio.h>
void main()
{
 char a[100],b[100],c[200];
 int i=0,j=0,length;
 printf("\n Enter the first word \n");
 gets(a);
 printf("\n Enter the second word \n");
 gets(b);
 while(a[i] !='\0')
 {
 c[j]=a[i];
 i++;
 j++;
 }
 i=0;
 while(b[i]!='\0')
 {
 c[j]=b[i];
 i++;
 j++;
 }
 for (i = 0; c[i] != '\0'; i++)
 {
 length++;
 }
 c[j]= '\0';
 printf("combination of the two words is \n");
 puts(c);
 printf("length of %s=%d\n",c,length);
}
