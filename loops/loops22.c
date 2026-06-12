/*Palindrome Number
A number that reads the same forward and backward.
Ex- 121 , 1221*/
#include <stdio.h>

int main() {
    int n, original, lastD, rev = 0;
    printf("Enter n:");
    scanf("%d",&n);
    original = n;
    while(n!=0){ //till n is not equal to 0
        lastD = n % 10; //extract number
        rev = rev * 10 + lastD;
        n = n /10; //remove number
    } 
    if(original == rev){
        printf("palindrome number\n");
    }
    else printf("not palindrome number\n");
    return 0;
}