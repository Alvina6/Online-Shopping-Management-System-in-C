#include <stdio.h>
#include <stdlib.h>

// Global variables
int i, n, n1, arr[5], sum = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, sm = 0, s = 0, p5 = 0;

// Function for clothes outlet
int clothes(void) {
    printf("1.MALE OUTLET STORE\n");
    printf("2.FEMALE OUTLET STORE \n");
    printf("3.Exit");
    printf("\nEnter your choices: ");
    scanf("%d", &n);

    switch (n) {
        case 1: // For men's store
            printf("1.Shirt(Rs:1000)\n");
            printf("2.Jean(Rs:2000)\n");
            printf("3.Shoes(Rs:3500)\n");
            printf("4.Hoodies(Rs:4500)\n");
            printf("5.Exit\n");
            printf("How many options do you want to use: ");
            scanf("%d", &n1);
            printf("Select your Options: ");
            // Take user inputs for options chosen
            for (int i = 0; i < n1; i++)
                scanf("%d", &arr[i]);
            for (int i = 0; i < n1; i++)
                switch (arr[i]) {
                    case 1:
                        printf("Enter the number of Shirts: ");
                        scanf("%d", &p1);
                        p1 = p1 * 1000; // Calculate the price
                        break;
                    case 2:
                        printf("Enter the number of Jeans: ");
                        scanf("%d", &p2);
                        p2 = p2 * 2000;
                        break;
                    case 3:
                        printf("Enter the number of Shoes: ");
                        scanf("%d", &p3);
                        p3 = p3 * 3500;
                        break;
                    case 4:
                        printf("Enter the number of Hoodies: ");
                        scanf("%d", &p4);
                        p4 = p4 * 4500;
                        break;
                    case 5:
                        return sum; // Exit if 5 is chosen
                }
            break;

        case 2: // For women's store
            printf("1.Sandals(Rs:2600)\n");
            printf("2.Shawls(Rs:1800)\n");
            printf("3.Shirt(Rs:1000)\n");
            printf("4.Kurti(Rs:2000)\n");
            printf("5.Suit(Rs:4500)\n");
            printf("6.Exit\n");
            printf("How many options do you want to use: ");
            scanf("%d", &n1);
            printf("Select your Options: ");
            // Take user inputs for options chosen
            for (int i = 0; i < n1; i++)
                scanf("%d", &arr[i]);
            for (int i = 0; i < n1; i++)
                switch (arr[i]) {
                    case 1:
                        printf("Enter the number of Sandals: ");
                        scanf("%d", &p1);
                        p1 = p1 * 2600; // Calculate the price
                        break;
                    case 2:
                        printf("Enter the number of Shawls: ");
                        scanf("%d", &p2);
                        p2 = p2 * 1800;
                        break;
                    case 3:
                        printf("Enter the number of Shirts: ");
                        scanf("%d", &p3);
                        p3 = p3 * 1000;
                        break;
                    case 4:
                        printf("Enter the number of Kurti: ");
                        scanf("%d", &p4);
                        p4 = p4 * 2000;
                        break;
                    case 5:
                        printf("Enter the number of Suit: ");
                        scanf("%d", &p5);
                        p5 = p5 * 4500;
                        break;
                    case 6:
                        return sum; // Exit if 6 is chosen
                }
            break;

        case 3:
            return sum; // Exit if 3 is chosen
    }

    sum = p1 + p2 + p3 + p4 + p5;
    printf("Billing Amount of clothes: %d\n", sum);

    return sum;
}

// Function for game tickets
int Game(void) {
    int n, m1 = 0, m2 = 0, m3 = 0, m4 = 0, s = 0;

    printf("\n1. Ice Skating (1500)\n");
    printf("2. Bowling (800)\n");
    printf("3. Bumper cars(700)\n");
    printf("4. Jumping Castle(300)\n");
    printf("5. Exit\n");
    printf("Please select your option: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Enter number of tickets: ");
            scanf("%d", &m1);
            m1 = m1 * 1500; // Calculate the total cost
            break;
        case 2:
            printf("Enter number of tickets: ");
            scanf("%d", &m2);
            m2 = m2 * 800; // Calculate the total cost
            break;
        case 3:
            printf("Enter number of tickets: ");
            scanf("%d", &m3);
            m3 = m3 * 700; // Calculate the total cost
            break;
        case 4:
            printf("Enter number of tickets: ");
            scanf("%d", &m4);
            m4 = m4 * 300; // Calculate the total cost
            break;
        case 5:
            return s; // Exit if 5 is chosen
    }

    s = m1 + m2 + m3 + m4;
    printf("Billing Amount of tickets is: %d\n", s);

    return s;
}

// Function for selecting food items and calculating the bill
int food(void) {
    printf("1.Biryani(350)\n");
    printf("2.Zinger Burger(250)\n");
    printf("3.French Fries(120)\n");
    printf("4.Coffee(250)\n");
    printf("5.Water(Bottle(50)\n");
    printf("6.Exit\n");
    printf("How many options you want to use: ");
    scanf("%d", &n1);
    arr[n1]; // Initialize array size (consider fixing this line if necessary)
    printf("Select your Options: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n1; i++)
        switch (arr[i]) {
            case 1:
                printf("Enter no's of Biryani: ");
                scanf("%d", &p1);
                p1 = p1 * 350;
                break;
            case 2:
                printf("Enter no's of Zinger Burger: ");
                scanf("%d", &p2);
                p2 = p2 * 250;
                break;
            case 3:
                printf("Enter no's of French Fries: ");
                scanf("%d", &p3);
                p3 = p3 * 120;
                break;
            case 4:
                printf("Enter no's of Coffee: ");
                scanf("%d", &p4);
                p4 = p4 * 250;
                break;
            case 5:
                printf("Enter no's of Water Bottle: ");
                scanf("%d", &p5);
                p5 = p5 * 50;
                break;
            case 6:
                return sm; // Exit the function
        }

    sm = p1 + p2 + p3 + p4 + p5;
    printf("Billing Amount of food items is: %d\n", sm);
    return sm;
}

// Function to manage the shopping process
void shoppingProcess(int *totalBill) {
    int n, s = 0, r = 0, t = 0;
    int n1 = 1, a, d, x;
    char fn[90], ln[90];

    printf("1. Clothes Outlet\n");
    printf("2. Gaming Area\n");
    printf("3. Food Court\n");
    printf("4. Exit\n");
    printf("\nEnter your Choice: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 4) {
        switch (n) {
            case 1:
                s = clothes();
                break;
            case 2:
                r = Game();
                break;
            case 3:
                t = food();
                break;
            case 4:
                exit(0);
        }

        *totalBill += s + r + t; // Update the total bill
    } else {
        printf("Invalid option. Kindly enter a valid option.\n");
    }

    printf("\nIs your shopping done (press 0) or do you want to continue (press 1): ");
    scanf("%d", &n);

    if (n == 0) {
        // Processing payment and generating bill
        printf("Your Total Bill is %d\n", *totalBill);
        printf("What Is Your First Name: ");
        scanf("%s", fn);
        printf("\nAnd Your Last Name: ");
        scanf("%s", ln);
        printf("\nIf you are Szabist student then press 1 else 2: ");
        scanf("%d", &a);

        if (a == 1) {
            d = (*totalBill * 0.2);
            *totalBill = *totalBill - d;
            printf("Congratulations! You have got a 20%% Discount.\n");
        }

        printf("Now your Bill is %d\n", *totalBill);
        printf("Enter Amount You Want To Pay: ");
        scanf("%d", &x);
        printf("Remaining Amount: %d\n", x - *totalBill);
        printf("Thanks for Coming\n\n");

        // Writing the bill details to a file
        FILE *bill;
        bill = fopen("bill.txt", "a");
        if (bill == NULL) {
            printf("Error opening the file.\n");
            return 1; // Exit With an Error Code
        }
        fprintf(bill, "Name: %s %s\nBill: %d\nDiscounted Bill: %d\nPaid: %d\nRemaining Amount: %d\n\n",
                fn, ln, *totalBill, *totalBill, x, x - *totalBill);
        fclose(bill);

        *totalBill = 0; // Reset totalBill after payment
    } else {
        shoppingProcess(totalBill); // Continue shopping process
    }
}

int main() {
    int totalBill = 0;
        printf("\n\t\t\t WELCOME TO CShOpPRO \n\n");
    shoppingProcess(&totalBill);

    return 0;
}

