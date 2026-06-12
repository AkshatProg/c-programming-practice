/*WAP to print
A B C
A B C
A B C
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    
    for(int i = 1;i<=n;i++){
        for(int j = 1; j <= n; j++){
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}