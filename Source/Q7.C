#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,temp,j,n;
 clrscr();
 printf("For how many number, you need to find the second largest?");
 scanf("%d",&n);
 printf("\nEnter %d Numbers:\n",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
 printf("Sorted elements:\n");
 printf("\nThe second largest number is: %d",a[n-2]);
 getch();
}