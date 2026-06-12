// Mini Calculator(sub and add)
#include <stdio.h>
// function declarations
int add(int a, int b);
int sub(int a, int b);

int main(void) {
    int a = 10, b = 8;
    int result;
    
    result = add(a,b);
    printf("Add = %d\n",result);
    
    result = sub(a,b);
    printf("Sub = %d\n",result);
    
    return 0;
}
// function definitions
int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
