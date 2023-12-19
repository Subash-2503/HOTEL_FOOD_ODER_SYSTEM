#include <stdio.h>
#include <string.h>

struct Item {
    int itemNo;
    char name[20];
    int limit; 
    int amount;
};

struct Item breakfastItems[] = {
    {1, "Tea", 1000, 12},
    {2, "Coffee", 1000, 15},
    {3, "Milk", 2000, 10},
    {4, "Poori", 2000, 25},
    {5, "Pongal", 2000, 30},
    {6, "Idli", 2000, 10},
    {7, "Dosa", 2000, 25},
    {8, "Onion Dosa", 2000, 25},
    {9, "Podi Dosa", 2000, 25},
    {10, "Maggi noodls", 2000, 25},
};

struct Lunch {
    int itemNo;
    char name[20];
    int limit;
    int amount;
};

struct Lunch lunchItems[] = {
    {1, "Tomato Rice", 1000, 50},
    {2, "Meals", 1000, 150},
    {3, "Veg Biriyani", 2000, 80},
    {4, "Chicken Biriyani", 2000, 100},
    {5, "Mutton Biriyani", 2000, 100},
    {6, "Vaankozhi Biriyani", 2000, 150},
    {7, "Omlette", 2000, 20},
    {8, "Half Boil", 2000, 150},
    {9, "Chicken Manjurian", 2000, 150},
    {10, "Mixed Fish Fry", 2000, 200},
};
struct Dinner {
    int itemNo;
    char name[20];
    int limit;
    int amount;
};
struct Dinner dinnerItems[] = {
    {1, "Grilled Chicken", 1500, 300},
    {2, "Salmon Steak", 2000, 50},
    {3, "Vegetarian Pasta", 1200, 50},
    {4, "Shavarma", 1200, 100},
    {5, "Chicken Fry", 1200, 100},
    {6, "Egg Noodles", 1200, 80},
    {7, "Chicken Noodles", 1200, 80},
    {8, "Egg Rice", 1200, 80},
    {9, "Chicken Rice", 1200, 80},
    {10, "Soop", 1200, 50},
};
struct Temp {
    int itemNo;
    char name[20];
    int limit;
    int amount;
};
struct Temp tempName[30];
int main() {
    int itemNo;
    int qty;
    char timing[20];
    char choice;
    printf("🙏𝓦𝓮𝓵𝓬𝓸𝓶𝓮 𝓽𝓸 🆅🅳 𝓻𝓮𝓼𝓽𝓪𝓾𝓻𝓪𝓷𝓽🙏:)\n");
    start:
    do {
        printf("𝐄𝐧𝐭𝐞𝐫 𝐭𝐡𝐞 𝐓𝐢𝐦𝐢𝐧𝐠 (𝐛𝐫𝐞𝐚𝐤𝐟𝐚𝐬𝐭/𝐥𝐮𝐧𝐜𝐡/𝐝𝐢𝐧𝐧𝐞𝐫): ");
        scanf("%19s", timing);
        if (strcmp(timing, "breakfast") == 0) {
            for (int i = 0; i < sizeof(breakfastItems) / sizeof(breakfastItems[0]); i++) {
                tempName[i].itemNo = breakfastItems[i].itemNo;
                strcpy(tempName[i].name, breakfastItems[i].name);
                tempName[i].limit = breakfastItems[i].limit;  
                tempName[i].amount = breakfastItems[i].amount;
            }
        } else if (strcmp(timing, "lunch") == 0) {
            for (int i = 0; i < sizeof(lunchItems) / sizeof(lunchItems[0]); i++) {
                tempName[i].itemNo = lunchItems[i].itemNo;
                strcpy(tempName[i].name, lunchItems[i].name);
                tempName[i].limit = lunchItems[i].limit;
                tempName[i].amount = lunchItems[i].amount;
            }
        } else if (strcmp(timing, "dinner") == 0) {
            for (int i = 0; i < sizeof(dinnerItems) / sizeof(dinnerItems[0]); i++) {
                tempName[i].itemNo = dinnerItems[i].itemNo;
                strcpy(tempName[i].name, dinnerItems[i].name);
                tempName[i].limit = dinnerItems[i].limit;
                tempName[i].amount = dinnerItems[i].amount;
            }
        } else {
            printf("Invalid Timing.\n");
            goto start;
        }
        int found = 0;
        printf("\n%-10s%-20s%-10s%-10s\n", "ItemNo", "Item", "Limit", "Amount");
        for (int i = 0; i < sizeof(tempName) / sizeof(tempName[0]); ++i) {
            if (tempName[i].amount == 0) {
                break;
            }
            printf("%-10d%-20s%-10d%-10d\n", tempName[i].itemNo, tempName[i].name, tempName[i].limit, tempName[i].amount);
        }
  printf("\nPlease Enter the item no.    : ");
        scanf("%d", &itemNo);
        printf("Please enter quantity        : ");
        scanf("%d", &qty);
        for (int i = 0; i < sizeof(tempName) / sizeof(tempName[0]); ++i) {
            if (itemNo == tempName[i].itemNo) {
                printf("\n%-29s: %d\n", tempName[i].name, tempName[i].amount * qty);
                found = 1;
                printf("\nThank you🙏🙏🙏, come again!🏃.\n");
                break;
            }
        }

        if (!found) {
            printf("\nInvalid item name.\n");
        }

        printf("\nDo you want to Order again? (y/n): ");
        scanf(" %c", &choice);
        while (getchar() != '\n');

    } while (choice == 'y' || choice == 'Y');

    printf("\n❣️𝕋𝕙𝕒𝕟𝕜𝕤 𝕗𝕠𝕣 𝕐𝕠𝕦𝕣 𝕆𝕣𝕕𝕖𝕣!!!!❣️\n");
    return 0;
}