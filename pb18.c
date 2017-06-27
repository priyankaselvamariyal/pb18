#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,i,temp,num,rem;
clrscr();
printf("enter the integers n1,n2:");
scanf("%d %d",&n1,&n2);
for(i=n1+1;i<n2;i++)
{
temp=i;
num=0;
while(temp!=0)
{
rem=temp%10;
temp=temp/10;
num=num+(rem*rem*rem);
}
if(i==num)
{
printf("%d",i);
}
}
}
getch();
}
