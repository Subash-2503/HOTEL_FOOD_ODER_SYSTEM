#include <stdio.h>


void displayMenu() {
    printf("\n************ veg Menu ************\n");
    printf("1.  parrota - $10\n");
    printf("2. chapathi - $12\n");
    printf("3.  dosa - $15\n");
    printf("4.   idly - $18\n");
    printf("\n************ non-veg Menu ************\n");
    printf("5.  chicken rice - $40\n");
    printf("6. biriyani - $55\n");
    printf("7.   chicken dosa - $35\n");
    printf("8.   chicken 65 - $65\n");
    printf("************************************\n");
}
void displayDessert() {
    printf("\n************ Dessert Menu ************\n");
    printf("1.  Gulab Jamun -20\n");
    printf("2. Rasamulai - $40\n");
    printf("3.  Ice cream - $50\n");
    printf("4.   Brownie - $40\n");
    printf("************************************\n");
}

int main() {
    int choice, quantity;
    float totalBill = 0.0;

    printf("***********************Welcome to SUBASH B.E !!!*****************************\n");
    printf("                   Here is your delicious world\n");
    printf("                       Eat and enjoy your day");
    

    do {
        
        displayMenu();

        
        printf("\nEnter the dish number you want to order (0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;  
        }


        printf("Enter the quantity: ");
        scanf("%d", &quantity);

    
        switch (choice) {
            case 1:
                totalBill += quantity * 10.0;
                printf("parrota added to your order.\n");
                break;
            case 2:
                totalBill += quantity * 12.0;
                printf("chapathi - added to your order.\n");
                break;
            case 3:
                totalBill += quantity * 15.0;
                printf("dosa  added to your order.\n");
                break;
            case 4:
                totalBill += quantity * 18.0;
                printf("idly added to your order.\n");
                break;
            case 5:
                totalBill += quantity *40.0;
                printf("chicken rice  added to your order.\n");
                break;
            case 6:
                totalBill += quantity * 55.0;
                printf("biriyani  added to your order.\n");
                break;
            case 7:
                totalBill += quantity * 35.0;
                printf("chicken dosa   added to your order.\n");
                break;
            case 8:
                totalBill += quantity * 65.0;
                printf("chicken 65   added to your order.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid dish number.\n");
        }

    } while (1);  
    
    
    printf("\nYour total bill is: $%.2f\n", totalBill);
    printf("Thank you for dining with us!\n");

do {
        
        displayDessert();

        
        printf("\nEnter the dessert number you want to order (0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;  
        }


        printf("Enter the quantity: ");
        scanf("%d", &quantity);

    
        switch (choice) {
            case 1:
                totalBill += quantity * 20.0;
                printf("Gulab Jamun added to your order.\n");
                break;
            case 2:
                totalBill += quantity * 40.0;
                printf("Rasamulai - added to your order.\n");
                break;
            case 3:
                totalBill += quantity * 50.0;
                printf("Ice cream  added to your order.\n");
                break;
            case 4:
                totalBill += quantity * 40.0;
                printf("Brownie added to your order.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid dish number.\n");
        }

    } while (1);  
    
    
    printf("\nYour total bill is: $%.2f\n", totalBill);
    printf("***************Thank you for dining with us!*******************\n");
    printf("\n************ Have a delicious day ************\n");
    return 0;
}


