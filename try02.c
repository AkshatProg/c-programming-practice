// Reading Array from User & Print using Loop
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d element\n",n);
    for(int i = 0; i < n; i++)
    {scanf("%d",&arr[i]);
    }
        printf("Entered array are :\n");
        for(int i = 0; i < n;i++)
        {
            printf("%d ",arr[i]);
        }
        

    return 0;
}