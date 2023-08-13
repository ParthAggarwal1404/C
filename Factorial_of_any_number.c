#include<stdio.h>
int main()
{
int num, fact=1,i;
printf("Enter a value to find the factorial :");
scanf("%d",&num);
for(i=num;i>=1;i--)
{
	fact=fact*i;
}printf("Factorial of %d is %d",num,fact);
return 0;
}