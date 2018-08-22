#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
void main()
{
clrscr();
int i;
struct node *h[5];
for(i=0;i<=4;i++)
{
h[i]=(struct node*)malloc(sizeof(struct node));
}
for(i=0;i<=4;i++)
{
h[i]->data=i;
h[i]->next=h[i+1];
}
for(i=0;i<=3;i++)
{
printf("\n %d",h[i]->data);
printf("\n %d",h[i]->next);
}
getch();
}
