// Check if the number entered lies btw 5 and 10
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num > 5 && num < 10){
        printf("The number %d lies btw the range",num);
    } 
    else{printf("The num %d doesnt fall in the range",num);}
    return 0;
}