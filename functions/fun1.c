// Max of two numbers
#include <stdio.h>
int max(int a, int b);

int main(void) {
    int a = 5, b = 10;
    int result;
    result = max(a,b);
    printf("%d is max\n",result);
    
    return 0;
}
     int max(int a, int b){
        if(a > b)
        return a;
        else
        return b;
     }
