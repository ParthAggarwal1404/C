#include<stdio.h>
#include<math.h>
int main(){
	int num,i;
	printf("Enter a number");
	scanf("%d",&num);
	printf("Enter a power");
	scanf("%d",&i);
    num =pow(num,i);
	printf("%d",num);
}