#include <stdio.h>

int main() {
    float x;
    scanf("%f",&x);
    float z = x - (int)x;
    int y = z;
    y = z * 10 * 10 * 10;
    printf("%d ",y);

    return 0;
}