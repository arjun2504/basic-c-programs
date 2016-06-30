#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 printf("Triangle 1:\n");
 for(i=1;i<=5;i++)
 {
  printf("\n");
  for(j=1;j<=i;j++)
   printf("5\t");
 }
 printf("\nTriangle 2:\n");
 for(i=1;i<=5;i++)
 {
  printf("\n");
  for(j=1;j<=i;j++)
   printf("%d\t",j);
 }
 getch();
}