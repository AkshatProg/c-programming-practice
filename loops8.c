//Display this GP - 100,50,25, .. upto 'nth' terms.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the nth term:");
    scanf("%d",&n);
    float a = 100;
    for(int i = 1;i<=n;i++){
        printf("%f ",a);
        a = a/2;
    } 
    return 0;
}