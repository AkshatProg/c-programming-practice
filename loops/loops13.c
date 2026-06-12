//WAP to print sum of all the numbers 
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int lastD = 0;
    int sum = 0;
    while(n!=0){
        lastD = n % 10; //extract last digit
        sum = sum + lastD;
        n = n /10; // remove last digit

    }
    printf("The sum of digits: %d",sum);

     
    return 0;
}