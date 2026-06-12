// Copy one array to another
#include <stdio.h>

int main(void){
    int src[5] = {10,20,30,40,50};
    int dest[5];
    int i;
    
    for(i = 0;i < 5;i++){
        dest[i] = src[i];

    }
    for(i = 0; i < 5; i++){
        printf("%d ",dest[i]);
    }
    return 0;
}