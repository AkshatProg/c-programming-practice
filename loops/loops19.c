/*Print the nth fibonacci number.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34...*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    
    if(n==0){
        printf("0\n");
        return 0;
    }
    if(n==1){
        printf("1\n");
        return 0;
    }
    int a = 0;
    int b = 1;
    int sum = 1;

    for(int i = 2;i<=n;i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d\n",sum);
     
    return 0;
}