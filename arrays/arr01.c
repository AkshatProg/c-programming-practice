// Find Sum and Average of Array Elements
#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    printf("Enter the size\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]); // Removed space
        sum += arr[i];
    }

    float avg = sum / n;
    printf("The sum is: %f \n", sum); // Use %f for float
    printf("The avg is: %f \n", avg); // Use %f for float

    

    return 0;
}