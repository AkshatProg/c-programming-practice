//Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
#include <stdio.h>

int main() {
    int l,b;
    printf("Enter the lenght: \n");
    scanf("%d",&l);
    printf("Enter the breadth: \n");
    scanf("%d",&b);
    int area = l * b;
    int peri = 2 * (l + b);
    if(area < peri){
        printf("perimeter is greater\n");
        }
    else {printf("area is greater\n");}

    return 0;
}