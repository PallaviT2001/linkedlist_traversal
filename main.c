#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
int count = 0;

struct node* creationandinsertion(struct node* head, int* count) {
    struct node* newnode, *temp = NULL;
    int choice = 1;

    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        if (!newnode) {
            printf("Memory allocation failed\n");
            return head;
        }
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Press 1 to continue and 0 to exit: ");
        scanf("%d", &choice);
    }
    return head;
}
void travesingandcount(struct node* head) {
    struct node *temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List elements:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
        count++;
    }
    printf("count value: %d\n",count);
    printf("NULL\n");
}
int main() {
    int choice = 1, option;

    while (choice) {
        printf("\n******* Select an operation ********\n");
        printf("1. Create a linked list\n");
        printf("2. Forward Traversing ang count\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            head = creationandinsertion(head, &count);
            break;
        case 2:
            travesingandcount(head);
            break;
        case 3:
            printf("Exiting\n");
            exit(0);
        default:
            printf("Invalid choice, try again\n");
        }
    }
    return 0;
}




