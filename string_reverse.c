#include<stdio.h>
#include<string.h>
int main()
{
char *c,*r;
printf("Enter the string to be reversed");
scanf("%s",&c);
r=strrev(c);
printf("The reversed string is %s",c);
}