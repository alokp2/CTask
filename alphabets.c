//program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character %c ",c);
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'|| c=='o'||c=='u')
    {
        printf("The alphabet is vowel");
    }
    else
    {
       printf("The alphabet is consonant");
    }
return 0;
}

