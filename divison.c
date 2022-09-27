//This program is to show that an input is divisible by 11 and 5 or not.

#include<stdio.h>

int main(){
  int num;
  printf("Enter any integer value ",num);
  scanf("%i",&num);
  if(num%5==0 && num%11==0){
    printf("Number = %i is divisible by both 11 and 5\n");
  }
 else{
    printf("Number = %i is not divisible by both 11 and 5\n");

 }
} 