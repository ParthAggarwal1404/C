#include <stdio.h>

int main()
{
    int x=5, *p1,*p2,temp,y=12;
    p1=&x; p2=&y;
    
    printf("before x = %d\nbefore y = %d\n",x,y);
    temp=*p2;
    *p2=*p1;
    *p1=temp;
    printf("after swapping x = %d\nafter swapping y = %d",x,y);
    return 0;
    
}