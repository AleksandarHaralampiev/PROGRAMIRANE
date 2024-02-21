#include "processes.h"
#include <stdio.h>

void print_menu() {
    printf("1. Create a new process\n");
    printf("2. List all processes\n");
    printf("3. Stop a process\n");
    printf("4. Exit\n");
}

void list_processes() {
    for (int i = 0; i < processescount; i++) {
        printf("ID: %d, Name: %s\n", processes[i].id, processes[i].name);
    }
}

int main() {
    int choice;
    char name[30];
    int id;

    while (1) {
        print_menu();
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter process name: ");
            scanf("%s", name);
            id = createnewprocess(name);
            if (id == 0) {
                printf("Error: Maximum number of processes reached.\n");
            } else {
                printf("Process created with ID: %d\n", id);
            }
        } else if (choice == 2) {
            list_processes();
        } else if (choice == 3) {
            printf("Enter process ID to stop: ");
            scanf("%d", &id);
            stopprocess(id);
        } else if (choice == 4) {
            return 0;
        } else {
            printf("Invalid choice. Please choose a number between 1 and 4.\n");
        }
    }
}