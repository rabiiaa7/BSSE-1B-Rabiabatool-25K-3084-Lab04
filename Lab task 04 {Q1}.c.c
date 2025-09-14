#include <stdio.h>

int main() {

    //Question 1
    int choice;

    //ask the user for size of pizza
    printf("What pizza size would you like: \n");
    printf("1.Small\n");
    printf("2.Medium\n");
    printf("3.Large\n");
    printf("Please enter the number of your choice:");
    scanf("%d",&choice);

    //check the user choice and print valid option:
    switch(choice) {
        case 1:
            printf("You choose: small\n");
            break;
        case 2:
            printf("You choose: medium\n");
            break;
        case 3:
            printf("You choose: large\n");
            break;
        default:
            printf("invalid size\n");
    }

    return 0;
}