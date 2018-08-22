#include<stdio.h>
void func(struct customer d[],int n);
void func(struct customer d[],int n)
{
int i;
printf("list of defaulters- \n");
for(i=0;i<=n-1;i++)
{
/*printf("%d %s %d\n",d[i].acnumber,d[i].name,d[i].balance);*/
if(d[i].balance<=100)
{
 printf("%d %s",d[i].acnumber,d[i].name);
}
}
}
