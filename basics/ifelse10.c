// find the youngest of all three ages
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
     if(a<b && a<c){
        printf("A youngest");
    }
    else if(b<a && b < c)
    {
        printf("b youngest");
        
     }
     else{
        printf("C youngest");
    
     } 
    return 0;
}