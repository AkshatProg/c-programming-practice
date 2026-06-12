/*Find duplicate elements
Idea:- Compare each element with others after it
*/
#include <stdio.h>

int main(void) {
    int arr[6] = {1, 2, 3, 2, 4, 1};
    int i, j;

    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 6; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate: %d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}
