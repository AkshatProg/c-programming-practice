/*WAP to print
1
A B
1 2 3
A B C D
1 2 3 4 5
*/
#include <stdio.h>

int main() {
    int n = 5;
    int i;
    int j;
    for(i = 1; i <= n;i++){
        for(j = 1; j <= i;j++){
            if(i % 2 != 0){
                printf("%d ", j);
            } else
            {
                printf("%c ",'A' + j - 1);
            }
        }
        printf("\n");
    } 
    return 0;
}