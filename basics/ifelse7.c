//Take 3 positive integers input and print the greatest of them.
#include <stdio.h>

int main() {
     int a, b, c;
     printf("Enter the three num: \n");
     scanf("%d %d %d",&a,&b,&c);
     if(a>b && a>c){
        printf("A greatesr");
    }
    else if(b>a && b > c)
    {
        printf("b greatesr");
        
     }
     else{
        printf("C is greater");
     }
    return 0;
}