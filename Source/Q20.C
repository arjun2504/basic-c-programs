#include<stdio.h>
#include<conio.h>
void main()
{
 int x[10],w[10],xw[10],num=0,den=0,wm,n,i;
 clrscr();
 printf("How many items you want to enter? ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nEnter the Subject%d mark: ",i+1);
  scanf("%d",&x[i]);
  printf("\nEnter the Weight for Subject%d: ",i+1);
  scanf("%d",&w[i]);
  xw[i]=x[i]*w[i];
  num+=xw[i];
  den+=w[i];
 }
 wm=num/den;
 printf("\nWeighted Mean = %d",wm);
 getch();
}