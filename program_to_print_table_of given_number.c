#include<stdio.h>
int main() 
{
  int i, a;
  printf("enter a no you want to see table of= ", a);
  scanf("%d", &a);
  
  for(i=1; i<=10; i++)
  printf("%d * %d = %d \n", a, i, a*i);
   
   return 0;
}