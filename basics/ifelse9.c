// Ques : Take 3 numbers input and tell if they can be the sides of a triangle.
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the sdies of triangle: \n");
    scanf("%d %d %d",&a,&b,&c);
    if((a + b > c)&& (b + c > a)&& (c + a > b)){
        printf("Yes, its a sides of triangle");
    } 
    else{
        printf("It cannot be sides of traingle");
    }
    return 0;
}