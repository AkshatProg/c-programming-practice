// WAP for Even / Odd with functions
#include <stdio.h>
int is_even(int n);

int main(void) {
    int n = 7;

    if(is_even(n)){
        printf("Even\n");
    } else{
        printf("Odd\n");
    }

     
    return 0;
}
int is_even(int n){
    if(n % 2 == 0)
    return 1;
return 0;
}