//Reverse a positive integer 
#include <stdio.h>

int main() {
     int num,reversed = 0, remainder;
     scanf("%d",&num);
     if(num < 0 ){
        printf("Enter a positive number\n");
        return 1; // stop on invalid input
     }
     else{ int original = num;
        while (num > 0){
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num = num / 10;
        }
        printf("Enter the number: %d\n", original);
        printf("Reversed number is %d\n", reversed);

     }
    return 0;
}