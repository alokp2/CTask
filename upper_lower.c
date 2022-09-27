
// This program demonstrate if the given character is uppercase or lower case.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character %c ",c);
    scanf("%c",&c);
    if(c >='A'&&c<='Z')
{
    printf("A character is uppercase");
}
else if(c >='a'&& c<='z')
{
    printf("A character is lowercase");
}
else{
    printf("A character is invalid");
}
return 0;
}