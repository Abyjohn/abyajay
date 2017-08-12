#include<stdio.h>
void main()
{
char c;
printf("enter a character\n");
scanf("%c",&c);
if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c =='i' || c == 'I' || c == 'o' || c == 'o' || c == 'u' || c == 'U')
{
 printf("%c is a vowel",c);
 }
 else
 {
 printf("%c is not a vowel",c);
 }
 }
