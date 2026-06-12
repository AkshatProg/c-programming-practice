/* WAP tp print
(1,1) (1,2) (1,3) (1,4) 
(2,1) (2,2) (2,3) (2,4) 
(3,1) (3,2) (3,3) (3,4) 
(4,1) (4,2) (4,3) (4,4) 
*/
#include <stdio.h>

int main() {
    int n;
    printf("enter rows: \n");
    scanf("%d",&n);
    for(int i = 1;i <= n; i++){  
    for(int j = 1;j <= n; j++){
        printf("(%d,%d) ", i, j);

    }
printf("\n");
 } 
    return 0;
}