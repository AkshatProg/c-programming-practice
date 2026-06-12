//Find the largest element in an array
#include <stdio.h>

int main()
{
    int arr[5] = {5, 8, 2, 10, 3};
    int largest;
    int i;

    largest = arr[0];

    for(i=0;i<5;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }

    }

    printf("%d", largest);

    return 0;
}