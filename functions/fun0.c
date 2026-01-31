// WAP to add two numbers using functions
#include <stdio.h>
int add(int a,int b);
 int main(void) {
    int a = 5, b = 10;
    int result;

    result = add(a,b);
    printf("%d\n",result);

    return 0;
}
 int add(int a, int b)
 {

    return a + b;
}
      
