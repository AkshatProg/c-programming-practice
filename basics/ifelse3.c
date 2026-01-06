// absolute value
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num<0) //if n is negative
    {
        num = num*(-1);
    }
    printf("The absolute number is: %d\n",num); 
    return 0;
}