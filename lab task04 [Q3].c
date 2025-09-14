#include <stdio.h>

int main(){

    int quantity;
    float totalcost;
    printf("How many pizzas do you want (1, 2, or 3)? ");
    scanf("%d", &quantity);

    if (quantity == 1) {
        totalcost = 8.0;
    } else if (quantity== 2) {
        totalcost = 15.0;
    } else if (quantity == 3) {
        totalcost = 21.0;
    } else {
        printf("Invalid number of pizzas.\n");
        return 1;
    }

    printf("Total cost for %d pizzas is $%.2f.\n",quantity, totalcost);

    return 0;
}
