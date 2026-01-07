// Print the AP series to nth term
// 4 7 10 13 16 ........ nth
#include <stdio.h>

int main() {
    int n;
    printf("Enter the nth term:");
    scanf("%d",&n);
    int a = 4;
    for(int i = 1; i <= n;i++){
        printf("%d ",a);
        a = a + 3;
    }
     
    return 0;
}