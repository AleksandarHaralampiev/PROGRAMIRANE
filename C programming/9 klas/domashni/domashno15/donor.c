#include <stdio.h>
#include "dynarr.h"

void printDonors(DynamicArray * arr) {
    for (int i = 0; i < arr->size; i++) {
        printf("%s\n", arr->buffer[i]);
    }
}

void removeDonor(DynamicArray * arr, float* egn) {
    int index = findIndex(arr, (DynArrType)egn);
    if (index != -1) {
        removeElement(arr, index);
    }
}

    int main() {
        DynamicArray donors;
        init(&donors, 1);

        while (1) {
            printf("1. Add donor\n2. Remove donor\n3. Print donors\n4. Exit\n");
            int choice;
            scanf("%d", &choice);

            if (choice == 1) {
                DynArrType egn;
                printf("Enter EGN: ");
                scanf("%f", &egn);
                pushBack(&donors, egn);
        } else if (choice == 2) {
            char egn[11];
            printf("Enter EGN: ");
            scanf("%s", egn);
            removeDonor(&donors, egn);
        } else if (choice == 3) {
            printDonors(&donors);
        } else if (choice == 4) {
            release(&donors);
            break;
        }
    }

    return 0;
}