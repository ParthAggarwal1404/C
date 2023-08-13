#include<stdio.h>
void calculateprice(float value);
int main(){
	float value ;
	printf("Enter the value of product :");
	scanf("%f",&value);
	calculateprice(value);

	return 0;
}
void calculateprice(float value){
   	float mrp;
    mrp= value +(0.18*value);
	printf("value is %f",mrp);
}