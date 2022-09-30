#include <stdio.h>
int main(){
    int reversed =0, num, number, remainder;
    printf("Enter the integer value ");
    scanf("%d", &num);
    number = num;
    
    while(num!=0){
        remainder = num%10;
        reversed = remainder + reversed*10;
        num = num/10;
    }
    
    if(reversed == number){
        printf("This integer %i is palindrome\n ",number);
    }
    else
    {
        printf("This integer  %i is not a palindrome\n ",number);
    }
}