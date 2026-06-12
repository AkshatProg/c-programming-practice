//Count Positive Numbers
#include <stdio.h>

int main() {
    int arr[5];
    int positives = 0;
    int i;
    for(i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    } 
    for(i = 0; i < 5; i++){
        if( arr[i]> 0 ){
            positives = positives + 1;
        }
    }
    printf("NUmber of positives : %d",positives);
    return 0;
}