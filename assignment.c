// The Purpose of the problem is to find the maximum integer value between three variables using conditional statement.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integer values: ");
    printf("\n Enter value of a \n ");
    scanf("%i",&a);

    printf("Enter value of b \n ");
    scanf("%i",&b);

    printf("Enter value of c \n");
    scanf("%i",&c);
    if(a>b &&a>c)
    {
        printf("A=%i is bigger than B and C\n",a);
    }
    else if(b>a&& b>c)
    {
       printf("B =%i is bigger than A and C\n",b); 
    }
   else if(b <c && c>a)
    {
        printf("C= %i is bigger than A and C\n",c);
    }
    else{
        printf("Input is not correct\n ");
    }
    return 0;
}
