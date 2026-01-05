/*Armstrong number
A number equal to the sum of its digits raised to the power of number of digits.
Ex: 153 → 1³ + 5³ + 3³ = 153*/
#include <stdio.h>

int main() {
    int n, original, lastD, sum = 0;
    printf("Enter n:");
    scanf("%d",&n); 
    original = n;
    while( n != 0){
        lastD = n % 10;
        sum = sum + (lastD * lastD * lastD);
        n = n / 10;
    }
    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}