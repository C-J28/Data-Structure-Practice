// source video: https://youtu.be/dti0F7w3yOQ?si=rIE679mb8A6Dbmbq
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    void *next;
    int data;
} Node;

Node *head = NULL;

// add a node to the list
Node *addNode(int data) {
    Node *new = NULL;
    // two cases:

    // if the list is empty
    if (head == NULL) {
        new = malloc(sizeof(Node));
        if (new == NULL) {
            return NULL;
        }
        new->data = data;
        head = new;
        new->next = NULL;
    } else {
        new = malloc(sizeof(Node));
        if (new == NULL) {
            return NULL;
        }
        new->data = data;
        new->next = head;
        head = new;
    }

    return new;
}

// remove a node from the list

// insert a node insto a position in the list

// print the created list
void printList() {
    Node *current = head;
    while (current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("\n");
    return;
}

void printMenu() {
    printf("Options:\n");
    printf("\t1. Add a node to the list. \n");
    printf("\t2. Remove a node from the lsit. \n");
    printf("\t3. Insert a node from the list. \n");
    printf("\t4. Print your list. \n");
    printf("\t5. Quit. \n");
    return;
}

int main(int argc, char **argv) {
    int option = -1;
    while (option != 5) {
        printMenu();
        int num_recieved = scanf("%d", &option);
        if (num_recieved == 1 && option > 0 && option <= 5) {
            switch(option) {
                case 1:
                    // add operation
                    printf("What data should I insert?: \n");
                    scanf("%d", &option);
                    Node *new = addNode(option);
                    break;
                case 2:
                    // remove operation
                    break;
                case 3:
                    // insert operation
                    break;
                case 4:
                    // print operation
                    printList();
                    break;
                case 5:
                    break;
            }
        }
    }
    return 0;
}