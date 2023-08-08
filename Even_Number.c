#include <stdio.h>

void main()
{
    int s = 100;
    int x=0;
    while(x<=s)
    {
        x=x+2;
        if (x==100)
        {
            printf("%d\n",x);
            break;

        }
        printf("%d\n",x);

    }
}