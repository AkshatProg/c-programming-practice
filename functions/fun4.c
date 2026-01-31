// Mini Calculator(sub and add)
#include <stdio.h>
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
int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
