// Write a program to find the value of one number raised to the power of another.
#include <stdio.h>

int main() {
    int base , power;
    printf("Enter the base and power: ");
    scanf("%d %d",&base,&power);
    int result = 1;
    for(int i = 1;i <= power;i++){
    result = result * base;
}
printf("%d",result);
    return 0;
}