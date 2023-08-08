#include<stdio.h>
void main()
{
    int grosssalary ,rent,da,basic_salary;
    printf("Total basic salary:");
    scanf("%d",&basic_salary);
    da = 0.4*basic_salary;
    rent= 0.2*basic_salary;
    grosssalary = basic_salary+rent+da;
    printf("\n Dearness allowance %d\n",da);
    printf("rent%d",rent);    
    printf("\n grosssalary =%d",grosssalary);


}