#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_TASKS 100
#define MAX_DESC 100

struct Task{
    char description[MAX_DESC];
    int priority;
    int isActive;
};

struct Task tasks[MAX_TASKS];
int taskCount = 0;

void addTask(char str[MAX_DESC]) {
    printf("Add Task: \n");
    scanf(" %s", str);
}
void showTasks(char str[MAX_DESC]) {
    printf("%s\n", str);
}
void deleteTask(char str[MAX_DESC]) {
    memset(str, '\0', MAX_DESC);
}
void displayMenu() {
    printf("1. Add Task\n");
    printf("2. Show Tasks\n");
    printf("3. Delete Task\n");
    printf("4. Exit\n");
}

int main() {
    int choice;
    char *desc = (char *)malloc(MAX_DESC);
    displayMenu();

    while (1) {
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addTask(desc); break;
            case 2: showTasks(desc); break;
            case 3: deleteTask(desc); break;
            case 4: return 0;
            default: printf("Invalid choice. Please try again.\n");
        }
        
    }
    
}
