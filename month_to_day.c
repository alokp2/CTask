#include<stdio.h>
int main()
{
    int month_number;
    printf("Enter the month number ");
    scanf("%i",&month_number);

    if(month_number==1 || month_number==3||month_number==5||month_number==7||month_number==8||month_number==10||month_number==12)
    {
        printf("Number of days in this month is 31 days\n");
    }
   
   else if(month_number==2){
    printf("Number of days in this month is either 28 or 29 days");
   }
    else
    {
        printf("Number of days in this month is 30 days\n");
    }
return 0;
}

