#include<stdio.h>
void main()
{
char c;
scanf("%c",&c);
if((c>='a' && c<='z') || (c>='A' && c<='Z'))
{
 if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
 {
 printf("Vowel");
 }
  else
  {
  printf("Consonant");
  }
  }
  else
  {
  printf("invalid");
  }
}
