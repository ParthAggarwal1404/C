#include <stdio.h>
int main()
{
char ch;
printf("Enter a character: \n");
scanf("%c",&ch);
switch(ch)
{
case 'A'...'Z':
printf("Upper case character\n");
break;
case 'a'...'z':
printf("Lower case character\n");
break;
case '0'...'9':
printf("Digit \n" );
break;
default:
printf("Special character\n");
}
return 0;
}    