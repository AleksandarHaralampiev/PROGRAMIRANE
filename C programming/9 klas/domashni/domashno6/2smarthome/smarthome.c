#include <stdio.h>

int main() {
    unsigned char rooms = 0; 
    int choice, room;

    while (1) {
        printf("1. Switch lights\n2. Print state\n3. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter room number (1-8): ");
                scanf("%d", &room);
                rooms ^= 1 << (room - 1);
                break;
            case 2:
                printf("The light is on in rooms: ");
                for (int i = 0; i < 8; i++) {
                    if (rooms & (1 << i)) { 
                        printf("%d ", i + 1);
                    }
                }
                printf("\n");
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}