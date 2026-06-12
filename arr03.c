/*Search element in array (LINEAR SEARCH)

Logic:-
Go element by element
Compare
Stop if found*/
#include <stdio.h>

int main(void) {
    int arr[5]={10,20,30,40,50};
    int key = 30;
    int i;
    int found = 0;

    for(i = 0; i < 5; i++){
        if(arr[i] == key){
            found = 1;
            break;
        }
    }
    if(found)
    printf("Found\n");
    else
    printf("Not Found\n");

    return 0;
}
