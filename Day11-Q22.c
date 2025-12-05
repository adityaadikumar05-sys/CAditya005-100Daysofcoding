//Q22: Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>

int main() {
    int cp,sp;
    int loss, profit;
    
    scanf("%d %d",&cp,&sp);
    
    if (cp > sp ) {
        loss = ((cp - sp) * 100) / cp;
        printf("Loss %d%%", loss);
    } else if (cp < sp) {
        profit = ((sp - cp) * 100) / cp;
        printf("Profit %d%%", profit);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}