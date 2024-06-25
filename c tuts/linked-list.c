#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct Node {

    int data;
    struct Node* next;

} Node;

Node* createNode(int data) {

    Node* newNode = (Node*) malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory Error!");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;
    printf("Node Created!");

    return newNode;

}

void traverseList(Node* head) {

    Node* current = head;

    while(current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("Null\n");
}

Node* searchKey(Node* head, int key) {

    Node* current = head;
    int count = 0;
    while(current != NULL) {
        if (current->data == key) {
            printf("Search completed in %d steps", count);
            return current;
        }
        current = current->next;
        count++;
    }


    return NULL;

}

void reverseList(Node** head) {

    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;

    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void insertAtBeginning(Node** head, int key) {

    Node* newNode = createNode(key);

    newNode->data = key;
    newNode->next = *head;
    *head = newNode;

}

void deleteAtBeginning(Node** head) {

    if (*head == NULL) {
        printf("The list is already empty!");
        return;
    }

    Node* temp = *head;
    *head = (*head)->next;
    free(temp);

}

int main() {

    Node* head = createNode(20);
    head->next = createNode(30);
    head->next->next = createNode(15);
    head->next->next->next = createNode(200);

    printf("%d", head->data);
    printf("%d", head->next->data);

    traverseList(head);

    int result = (searchKey(head, 200))->data;
    printf("%d", result);

    return 0;
}