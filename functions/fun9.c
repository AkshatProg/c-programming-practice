// Reverse Array
#include <stdio.h>
void reverse(int arr[],int size);


int main(void) {
    int data[5] = {1,2,3,4,5};
    int i;
    reverse(data,5);
    for(i = 0;i<5;i++){
        printf("%d ",data[i]);

    }
     
    return 0;
}
void reverse(int arr[],int size){
    int i;
    int temp;

    for(i = 0;i<size/2;i++){
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}