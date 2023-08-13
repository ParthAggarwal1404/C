# include <stdio.h>
int main()
{ 
int i,j;
double number, sum = 0.0;
printf("Enter the total number you want to add :");
scanf("%d",&j);
for(i=1; i <= j; ++i)
{

printf("Enter the %d number : ",i);
scanf("%lf",&number);
if(number < 0.0)
{
 continue;
  }
sum += number; // sum = sum + number;
}
printf("Sum =%.2lf",sum); 
return 0;
}