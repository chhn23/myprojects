#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(i=1;i<=3;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
for(i=1;i<=2;i++)
{
for(j=2;j>=i;j--)
{
printf("*");
}
printf("\n");
}
getch();
}