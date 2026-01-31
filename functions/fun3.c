//Action-only function
#include <stdio.h>
void print_sum(int a, int b);

int main(void) {
    int a = 4;
    int b = 8;

    print_sum(a,b);

     
    return 0;
}

void print_sum(int a, int b){
    printf("Sum = %d\n",a + b);
}
