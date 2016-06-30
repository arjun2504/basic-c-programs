#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char txt[50];
 int a=0,e=0,i=0,o=0,u=0,v=0,max,c;
 clrscr();
 printf("Enter a line\n");
 scanf("%[^\n]s",txt);
 max=strlen(txt);
 for(c=0;c<max;c++)
 {
  switch(txt[c])
  {
   case 'A':
   case 'a': a++; if(a==1) v++; break;
   case 'E':
   case 'e': e++; if(e==1) v++; break;
   case 'I':
   case 'i': i++; if(i==1) v++; break;
   case 'O':
   case 'o': o++; if(o==1) v++; break;
   case 'U':
   case 'u': u++; if(u==1) v++; break;
  }
 }
 printf("There are %d out of 5 vowels in the given line.\n",v);
 printf("where,\n a is repeated %d time(s)\n",a);
 printf(" e is repeated %d time(s)\n",e);
 printf(" i is repeated %d time(s)\n",i);
 printf(" o is repeated %d time(s)\n",o);
 printf(" u is repeated %d time(s)\n",u);
 printf("Total = %d (with repetition)",a+e+i+o+u);
 getch();
}