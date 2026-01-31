/*WAP to print the rectangle pattern
 * * * * * *
 *         *
 *         *
 * * * * * *
*/
#include <stdio.h>

int main() {
    int n;
    int m;
    int i;
    int j;
    printf("Enter the no. of rows and col: ");
    scanf("%d %d",&n,&m);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            if(i == 1 || j == 1 || j == m || i == n){
                printf("*");
            } else
            {
                printf(" ");
            }
        }
        printf("\n");
    } 
    return 0;
}