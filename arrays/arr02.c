// Count Even and Odd Numbers in an Array
#include <stdio.h>

int main() {
    int n, arr[100], odd[100], even[100], o = 0, e = 0;
    printf("Enter the size:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    printf("Even elements:\n");
    for (int i = 0; i < e; i++) {
        printf("%d\n", even[i]);
    }

    printf("\nOdd elements:\n");
    for (int i = 0; i < o; i++) {
        printf("%d\n", odd[i]);
    }

    return 0;
}