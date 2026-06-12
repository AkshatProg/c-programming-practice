#include <stdio.h>

int main() {
    int grades[3];
    int average;
    
    grades[0] = 100;
    grades[1] = 85;
    grades[2] = 44;

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of all the grades are: %d\n",average);
    return 0;
}