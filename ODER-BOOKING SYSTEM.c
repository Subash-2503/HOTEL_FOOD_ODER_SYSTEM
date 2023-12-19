#include <stdio.h>
#include <stdlib.h>

int total;

struct MenuItem {
    int id;
    char name[50];
    float price;
};


void displayMenu(struct MenuItem menu[], int numItems) {
    printf("\nMenu:\n");
    printf("------------------------------------------------\n");
    printf("ID\tItem\t\t\t\t\t\t\tPrice\n");
    printf("------------------------------------------------\n");

    for (int i = 0; i < numItems; i++) {
        printf("%d\t  %s\t\t   %.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }

    printf("------------------------------------------------\n");
}

// Function to place an order
void placeOrder(struct MenuItem menu[], int numItems) {
    int orderId;
    int quantity;
    float total = 0;

    printf("\nEnter the ID of the item to order (0 to finish): ");
    scanf("%d", &orderId);

    while (orderId != 0) {
        if (orderId < 1 || orderId > numItems) {
            printf("Invalid item ID. Please try again.\n");
        } else {
        printf("Plates to be Served %s: ", menu[orderId - 1].name);
            scanf("%d", &quantity);
            total += menu[orderId - 1].price * quantity;
        }

        printf("\nEnter the ID of the next item to order (0 to finish): ");
        scanf("%d", &orderId);
    }

    printf("\nTotal Bill: $%.2f\n", total);
       if(total!=0)
    {
        printf("\nAnything Else,Sir/Madam !");
    } if(total>1000)
    {
        printf("\n\nCongratulations Sir! \nyou got Amazon Voucher Worth ₹500");
        }if(total>200){
            printf("\n\nCoffee is Free(For Bill above 200) ");
        }if(total>500){
            printf("\nBoth Coffee and IceCream is Free(For Bill above 500)");
        }
}

int main() {
   printf("❤️❤️❤️❤️Hotel Mythr️a❤️❤️❤️❤️");
    printf("\n\nWelcome (Sir/Madam) ");
    printf("\n\n➢➢➢➢➢➢➢➢➢➢➢➢➢➢➢");
    printf("\n\n24/7 , All Foods Available");
    struct MenuItem menu[] = {
        {1, "Idly                 ",7.00},
        {2, "Dosa                 ",30.00},
        {3, "Poori                ",20.00},
        {4, "Pongal               ",40.00},
        {5, "Rise Sevai           ",50.00},
        {6, "Uttappam            " ,100.00},
        {7, "Puttu               " ,50.00},
        {8, "Roast               " ,50.00},
        {9, "Onion Roast         " ,70.00},
        {10, "Full Meals         " ,180.99},
        {11, "Mini Meals         " ,120.99},
        {12, "chappathi          " ,80.49},
        {13, "Variety Rice       " ,40.99},
        {14, "Veg Biriyani       " ,90.99},
        {15, "cauliflower        ",95.00},
        {16, "Mush.Gravy         ",105.00},
        {17, "Parotta            ",25.00},
        {18, "Bun parotta        ",30.00},
        {19, "Kothu parotta      ",50.00},
        {20, "chola puri         ",50.00},
        {21, "Mushroom Roast     ",120.00},
        {22, "Non roti           " ,25.00},
        {23, "Panner Butter Masala",180.00},
        {24, "kaalan gravy       ",140.00},
        {25, "Podi Idly          ",100.00},
        {26, "Kothu Idly         ",130.00},
        
    };

    int numItems = sizeof(menu) / sizeof(menu[0]);

    int choice;
   
    do {
         printf("\n\n---------Restaurant Management--------- \n");
        printf("\n1. Display Menu\n");
        printf("2. Place Order\n");
        printf("3. Exit\n");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayMenu(menu, numItems);
                break;
            case 2:
                placeOrder(menu, numItems);
                break;
            case 3:
            printf("Thank you ❤️️ for visiting Us (Sir/Madam)");
                break;
            default:
          printf("Invalid choice. Please try again\n");
        }

    } while (choice != 3);


    return 0;
}