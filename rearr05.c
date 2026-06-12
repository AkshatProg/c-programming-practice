// Count the even numbers 
#include <stdio.h>

int main() {
    int arr[5];
    int even=0;
    int i;
    for(i = 0;i <=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < 5; i++){
        if(
            arr[i] % 2 == 0
        ){
            even = even + 1;
        }
    }
    printf("Number of evens: %d\n",even);

    return 0;
}