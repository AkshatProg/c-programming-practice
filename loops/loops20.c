// Print first 'n' fibonăcci numbers.
#include <stdio.h>

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int a = 0;
    int b = 1;
    int sum ;

    if(n>=1)
    printf("0\n");


if(n>=2)
printf("1\n");


for(int i = 3; i<= n; i++){
    sum = a + b;
    printf("%d\n",sum);
    a = b;
    b = sum;
}
     
    return 0;
}