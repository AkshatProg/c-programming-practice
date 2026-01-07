// Print the factorial of a given number 'n'
#include <stdio.h>

int main() {
    int n;
    printf("enter the n value: ");
    scanf("%d",&n);
    int fact = 1;
    for(int i = n; i > 0; i--){
        fact = fact * i;
    }
    printf("The factorial value is: %d",fact);

    return 0;
}