#include<stdio.h>
int main()
{
int i,sum=0,sum1=0,j;
for(i=1;i<=15;i++)
{
sum=sum+i;
}
printf("sum of nos from 1 to  15  is %d",sum);
}
for(j=15;j<=45;j++)
{
if(j%2!=0)
{
sum1=sum1+j;
}
printf("The sum of odd nos between 15 and 45 in %d",sum1);
}
}