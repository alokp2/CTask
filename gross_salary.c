/*program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/

#include<stdio.h>
int main()
{
    float salary;
    printf("Enter salary of an employee ");
    scanf("%f",&salary);
    if(salary <= 10000){
       float total = salary-(salary *0.20*0.80);
       printf("The total salary is %f  ",total);

    }
    else if(salary <= 20000)
    {
        float tot = salary-(salary*0.25*0.90);
         printf("The total salary is %f ",tot);    
            
    }
    else
    {
        printf("The salary is %f", salary-(salary*0.35*0.95));
    }
return 0;
}
