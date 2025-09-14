#include <stdio.h>

int main() {

    int quantity;
printf("How many small pizzas do you want? \n");
    scanf("%d", &quantity);

    if (quantity > 1) {
        printf("Check out our multi-pizza deals \n ");
    } else {
        printf("your total is $8 \n");
    }


    return 0;
}
