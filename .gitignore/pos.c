#include<stdio.h>
int main()
{
int n;
printf("enter the number /n");
scanf("%d",&n);
if(n>0)
printf("the given number is positive");
else if(n==0)
printf("the given number is zero");
else
printf("the given number is negative");
return(0);
}
