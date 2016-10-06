#include<stdio.h>
#include<string.h>
int main()
{
char *c;
int i;
printf("Enter the string");
scanf("%s",&c);
for(i=0;i<strlen(c);i++)
{
if(i%2!=0)
c[(i%2!=0)]=c[(i%2==0)];
else
c[(i%2==0)]=c[(i%2!=0)];
}
for(i=0;i<strlen(c);i++)
{
printf("%s",c);
}
}