#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    NEW,
    STARTED,
    COMPLETED
} TaskStatus;

typedef struct ListNode {
    char* name;
    TaskStatus status;
    struct ListNode * next;
} ListNode;

typedef struct {
    ListNode * head;
    unsigned int size;
} LinkedList;

LinkedList init() {
    LinkedList list;
    list.head = NULL;
    list.size = 0;
    return list;
}

void addTask(LinkedList * list, char* name, unsigned int priority) {
    ListNode* newTask = (ListNode*) malloc(sizeof(ListNode));
    newTask->name = strdup(name);
    newTask->status = NEW;
    newTask->next = NULL;

    if (priority > list->size + 1) {
        priority = list->size + 1;
    }

    if (priority == 1) {
        newTask->next = list->head;
        list->head = newTask;
    } else {
        ListNode* current = list->head;
        for (unsigned int i = 2; i < priority; i++) {
            current = current->next;
        }
        newTask->next = current->next;
        current->next = newTask;
    }

    list->size++;
}

void changeTaskStatus(LinkedList * list, unsigned int taskNumber, TaskStatus newStatus) {
    if (taskNumber > list->size) {
        printf("Invalid task number.\n");
        return;
    }

    ListNode* current = list->head;
    for (unsigned int i = 1; i < taskNumber; i++) {
        current = current->next;
    }

    current->status = newStatus;
}

void printTasks(LinkedList * list) {
    ListNode* current = list->head;
    unsigned int taskNumber = 1;
    while (current != NULL) {
        printf("Task %u: %s, status: %s\n", taskNumber, current->name, current->status == NEW ? "NEW" : (current->status == STARTED ? "STARTED" : "COMPLETED"));
        current = current->next;
        taskNumber++;
    }
}

void deleteTask(LinkedList * list, unsigned int taskNumber) {
    if (taskNumber > list->size) {
        printf("Invalid task number.\n");
        return;
    }

    ListNode* toDelete;
    if (taskNumber == 1) {
        toDelete = list->head;
        list->head = list->head->next;
    } else {
        ListNode* current = list->head;
        for (unsigned int i = 2; i < taskNumber; i++) {
            current = current->next;
        }
        toDelete = current->next;
        current->next = current->next->next;
    }

    free(toDelete->name);
    free(toDelete);
    list->size--;
}