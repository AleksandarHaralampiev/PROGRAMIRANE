#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum { NEW, STARTED, FINISHED } TaskState;

typedef struct {
  char name[50];
  TaskState state;
} Task;

void printTask(ListType task, uint index) {
  printf("Priority: %d, Name: %s, State: ", index + 1, ((Task *)task)->name);
  switch (((Task *)task)->state) {
    case NEW:
      printf("New\n");
      break;
    case STARTED:
      printf("Started\n");
      break;
    case FINISHED:
      printf("Finished\n");
      break;
  }
}

void printTasks(LinkedList * list) {
  forEach(list, printTask);
}
void addTask(LinkedList * list, uint priority, char * name) {
  Task * newTask = (Task *)malloc(sizeof(Task));
  strcpy(newTask->name, name);
  newTask->state = NEW;
  if(list->size == 0) {
    pushFront(list, newTask);
  }
  else {
    push(list, priority - 1, newTask);
  }
}

void changeTaskState(LinkedList * list, uint priority, TaskState newState) {
  Task * task = (Task *)getElement(list, priority - 1);
  task->state = newState;
}

void deleteTask(LinkedList * list, uint priority) {
  pop(list, priority - 1);
}

int main() {
  printf("Welcome to my quest program!");
  LinkedList tasks = init();
  printf("Is head NULL: %d\n", tasks.head == NULL);
  printf("Size: %u\n", tasks.size);
  
  while (1)
  {
    printf("Choose your option\n");
    printf("(Option 1) Add quest\n");
    printf("(Option 2) View all quests\n");
    printf("(Option 3 ) Change a quest progress\n");
    printf("(Option 4) Remove a quest\n");
    printf("(Option 5) Exit the program\n");

    int option;
    scanf("%d", &option);

    switch(option) {
        case 1: {
            printf("Name: ");
            char name[50];
            scanf("%s", name);
            int priority;
            printf("Enter your priority: ");
            scanf("%d", &priority);
            addTask(&tasks, priority, name);
            break;
        }
        case 2: {
            printTasks(&tasks);
            break;
        }
        case 3: {
            printf("Enter the task priority: ");
            int index;
            scanf("%d", &index);  
            index--;
            printf("Enter the progress: ");
            char prgs[50];
            scanf("%s", prgs);
            TaskState newState;
            
            if(strcmp(prgs, "new") == 0) {
              newState = NEW;
            }
            else if(strcmp(prgs, "ongoing") == 0) {
              newState = ONGOING;
            }
            else if(strcmp(prgs, "finished") == 0) {
              newState = FINISHED;
            }
            
            changeTaskState(&tasks, index, newState);
            break;
        }
        case 4: {
            printf("Enter the task priority: ");
            int index;
            scanf("%d", &index);  
            index--;
            deleteTask(&tasks, index);
            break;
        }
        case 5: {
            return 0;
        }
        default: {
            printf("Invalid option. Please try again.\n");
            break;
        }
    }
}
}