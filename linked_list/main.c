// source video: https://youtu.be/dti0F7w3yOQ?si=2FV841IXy0X-p5cb
#include <stdio.h>

typedef struct {
    void *next;
    int data;
} Node;

Node *head = NULL;

// add a node to the list
Node *addNode(int data) {

}

// remove a node from the list

// insert a node insto a position in the list

void printMenu() {
    printf("Options:\n");
    printf("\t1. Add a node to the list. \n");
    printf("\t2. Remove a node from the lsit. \n");
    printf("\t3. Insert a node from the list. \n");
    printf("\t4. Quit. \n");
    return;
}

int main(int argc, char **argv) {
    int option = -1;
    while (option != 4) {
        printMenu();
        int num_recieved = scanf("%d", &option);
        if (num_recieved == 1 && option > 0 && option <=4) {
            switch(option) {
                case 1:
                    //add operation
                case 2:
                    // remove operation
                case 3:
                    // insert operation
                case 4:
                    break;
            }
        }
    }
    return 0;
}