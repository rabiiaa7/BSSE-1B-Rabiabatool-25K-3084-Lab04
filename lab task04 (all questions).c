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
            return 1;
    }
    //Question 2
    //ask the user about how many pizza they want

    int quantity;
    int cost =0;
    double totalcost = 0.0;

    printf("how many pizzas would u like: ");
    scanf("%d",&quantity);

    if (choice > 1) {
        printf("Check our multi-pizza deals.\n");
    } else {
        printf("Your total is $8.\n");
    }

    printf("\n");

    // Question 3
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

    //Question 4
    int crust_choice;
    // Starting total, for example, from the base pizza price

    printf("Choose your crust type:\n");
    printf("1. Regular crust ($0)\n");
    printf("2. Thin crust ($1)\n");
    printf("3. Stuffed crust ($2)\n");
    printf("Enter your choice : ");
    scanf("%d", &crust_choice);

    switch (crust_choice) {
        case 1:
            // Regular crust has no additional cost, so total_cost remains the same.
            printf("Regular crust selected.\n");
            break;
        case 2:
            totalcost += 1.0;
            printf("Thin crust selected.\n");
            break;
        case 3:
            totalcost += 2.0;
            printf("Stuffed crust selected.\n");
            break;
        default:
            printf("Invalid choice. No crust cost was added.\n");
    }

    printf("Your new total cost is $%.2f.\n", totalcost);


    //Question 5
    char cheese;

    printf("Do you want extra cheese? (Y/N): ");
    scanf(" %c", &cheese);

    if (cheese == 'Y' || cheese == 'y') {
        totalcost += 1.50;
        printf("Extra cheese added.\n");
    } else {
        printf("No extra cheese added.\n");
    }

    printf("Your new total is $%.2f.\n", totalcost);

    //Question 6
    int time;


        printf("Enter the current time in 24-hour format (0-23): ");
        scanf("%d", &time);


        if (time >= 11 && time < 14) {
            totalcost = totalcost * 0.90; // Apply a 10% discount
            printf("Lunchtime special! You've received a 10%% discount.\n");
        } else {
            printf("No discount applied at this time.\n");
        }

        printf("Your new total is $%.2f.\n", totalcost);

     //Question 7
        quantity = 3;
        crust_choice = 3;

        if (quantity == 3 && crust_choice == 3) {
            printf("You get free garlic bread!\n");
        } else {
            printf("No free garlic bread with this order.\n");
        }

    //Question 8
    int delivery;

            printf("Will this be for pickup or delivery?\n");
            printf("1. Pickup\n");
            printf("2. Delivery\n");
            printf("Enter your choice (1 or 2): ");
            scanf("%d", &delivery);

    //Question 9
            if (delivery== 2) {
                totalcost += 3.00;
                printf("A $3.00 delivery fee has been added.\n");
            } else if (delivery== 1) {
                printf("Pickup selected. No delivery fee will be charged.\n");
            } else {
                printf("Invalid choice. No delivery fee has been added.\n");
            }

            printf("Your final cost is $%.2f.\n", totalcost);

    //Question 10
        char student;

        printf("Are you a student? (Y/N): ");
        scanf(" %c", &student);

        if (student == 'Y' || student== 'y') {
            printf("Hello, student! Good luck in your studies!.\n");
        } else {
            printf("Make sure to visit again!.\n");
        }

    printf("Thankyou for your order!\n");
    printf("Have a nice day!\n");

    return 0;
}






