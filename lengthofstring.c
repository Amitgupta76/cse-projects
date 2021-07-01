#include <stdio.h>
void main()
{
 char s[100],r[100];
 int i, length = 0;
 printf("\nEnter the string :");
 gets(s);
 i = 0;
 while (s[i] != '\0')
 {
 r[i] = s[i];
 i++;
 }
 for (i = 0; r[i] != '\0'; i++)
 {
 length++;
 }
 r[i] = '\0';
 printf("\n Copied String is %s ", r);
 printf("\n The length of a string is the number of characters in it \n");
 printf("So, the length of %s = %d\n",r,length);
}
