#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name[20],rev[20];
 int t,i,l,j;
 clrscr();
 printf("Enter a name: ");
 scanf("%s",&name);
 l=strlen(name);
 for(i=0,j=l-1;i<l;i++,j--)
  rev[i]=name[j];
 for(i=0;i<l;i++)
 {
  if(name[i]==rev[i])
   t=1;
  else
  {
   t=0;
   break;
  }
 }
 if(t==1)
  printf("Palindrome");
 else
  printf("NOT Palindrome");
 getch();
}