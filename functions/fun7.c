// Find Max in an Array
#include <stdio.h>
int find_max(int arr[], int size);

int main(void) {
    int data[5]= {1,2,3,4,5};
    int max_value;
    max_value = find_max(data,5);
    printf("Max = %d",max_value);     
    return 0;
}

int find_max(int arr[], int size){
    int max = arr[0];
    for(int i = 0;i < size; i++){
        if(arr[i] > max)
        max = arr[i];
    }
    return max;
}
