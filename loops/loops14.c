// Reverse a number
#include <stdio.h>

int main() {
     int n;
     printf("Enter the number:");
     scanf("%d",&n);
     int rev = 0;
     while(n != 0){
     int lastD = n % 10;
     rev = rev * 10 + lastD;
     n = n / 10;
     }
     printf("the reversed number is : %d",rev);

    return 0;
}