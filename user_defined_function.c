#include<stdio.h>
void nameste();
void bonjour();
void main(){
  char ch;  
printf("Enter your natioality i for indian & f for french :");	
scanf("%c",&ch);
if(ch == 'i'){
nameste();
}
else if(ch=='f') {
bonjour();
}
else{
	printf("Error");
}

}
void nameste(){
    
    printf("Nameste\n");
}
void bonjour(){
    
    printf("Bonjour\n");
}