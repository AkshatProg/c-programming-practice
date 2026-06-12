// Reversing the number
#include <stdio.h>

int main() {
    int n = 456;
    int rev = 0;

    while( n > 0 ){   // condition
        int rem = n % 10;  // get last digit
        rev = rev * 10 + rem; // build reverse
        n = n / 10;   // reduce number
    }

    printf("%d", rev);
    return 0;
}
