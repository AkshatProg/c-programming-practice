// WAP to print sum of all the even digits of a given number.
#include <stdio.h>

int main() {
    int n;
    int lastD = 0;
    int sum = 0;
    printf("Enter the number:");
     scanf("%d",&n);
     while(n!= 0){
        lastD = n % 10;
        if(lastD % 2 == 0) {
            sum = sum + lastD;
        }
        n = n / 10;
    }
      printf("The sum of number is %d",sum);
    return 0;
}