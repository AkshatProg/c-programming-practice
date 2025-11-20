// take 4 inputs and print the greatest
#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    if(a>b && a>c && a>d){
        printf("%d greatest",a);
    } 
    else if(b>a && b>c && b>d){
        printf("%d greatest",b);
    }
    else if(c>a && c>b && c>d)
    {printf("%d greatest",c);
    }
    else{
    printf("%d greatest",d);
    }
    return 0;
}