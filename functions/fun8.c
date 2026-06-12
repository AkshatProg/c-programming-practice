// Count Even and Odd Numbers
#include <stdio.h>
void count_even_odd(int arr[],int size,int *even,int *odd);

int main(void) {
    int data[6]= {1,2,3,4,5,6};
    int even_count;
    int odd_count;
    
    count_even_odd(data,6,&even_count,&odd_count);
    
    printf("Even = %d\n",even_count);
    printf("Odd = %d\n",odd_count);
    
    return 0;
}
void count_even_odd(int arr[],int size,int *even,int *odd){
    int i;
    *even = 0;
    *odd = 0;
    for(i = 0;i < size;i++){
        if(arr[i]%2==0)
        (*even)++;
        else
        (*odd)++;
    }
}
