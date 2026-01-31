// Sum of array elements
#include <stdio.h>
int sum_array(int arr[], int size);

int main(void) {
    int data[5] = {1,2,3,4,5};
    int result;
    result=sum_array(data,5);
    printf("%d\n",result);
    
    
    return 0;
}
int sum_array(int arr[], int size){
    int sum = 0;
    for(int i = 0;i < size;i++){
        sum += arr[i];
    }
    return sum;
}
