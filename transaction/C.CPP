#include<stdio.h>
#include<conio.h>
#include"db.h"
#include"list.h"
void main()
{
clrscr();
struct customer c[4];
int i,ac,wa,da,n;
for(i=0;i<4;i++)
{
scanf("%d %s %d",&c[i].acnumber,&c[i].name,&c[i].balance);
}
printf("\n \n what do you want?? \n");
printf("1)withdrawl\n");
printf("2)deposit\n");
printf("3)list of defaulters");
printf("enter your choice\n");
scanf("%d",&n);
switch(n)
{
 case 1:
 clrscr();
 printf("\n enter account number");
 scanf("%d",&ac);
 printf("enter the withdrawl amount");
 scanf("%d",&wa);
 for(i=0;i<=3;i++)
 {
  if(c[i].acnumber==ac)
  {
  c[i].balance=c[i].balance-wa;
  if(c[i].balance<=100)
  {
  printf("transaction cannot be made");
  c[i].balance=c[i].balance+wa;
  }
  }
 }
 break;

 case 2:
 clrscr();
 printf("enter the account nmber");
 scanf("%d",&ac);
 printf("enter the amount to be deposited");
 scanf("%d",&da);
 for(i=0;i<=3;i++)
 {
  if(c[i].acnumber==ac)
  {
  c[i].balance=c[i].balance+da;
  }
  }
  break;

 case 3:
 clrscr();
    func(c,4);
    break;


  default:
  printf("wrong choice");
}


getch();
}

