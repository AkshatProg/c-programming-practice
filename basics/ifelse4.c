#include <stdio.h>

int main() {
    int cp, sp, profit, loss;
    printf("Enter the cp: \n");
    scanf("%d",&cp);
    printf("Enter the sp: \n");
    scanf("%d",&sp);

    if(cp>sp){
        loss = cp - sp;
        printf("You made loss: %d\n",loss);
        
    }
    else if(sp>cp)
    {
        profit = sp - cp;
        
        printf("You made profit: %d\n",profit);
    }
    else
    {
    printf("You made neither profit nor loss");
        }
    return 0;
}