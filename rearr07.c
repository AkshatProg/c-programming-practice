// Largest Element
#include <stdio.h>

int main() {
    int arr[5];
    int largest = arr[0];
    int i;

    for(i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    } 
        largest = arr[0];
    
        for(i = 1; i < 5; i++){
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("%d is largest",largest);
    return 0;
}