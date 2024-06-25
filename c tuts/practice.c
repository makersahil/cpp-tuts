#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {

    Node* newNode = (Node*) malloc(sizeof(Node));

    if (!newNode) {
        printf("Memory Error!\n");
    }

    newNode->data = data;
    newNode->next = NULL;

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

void reverseList(Node** head){

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

int insertAtBeginning(Node** head, int data) {

    Node* newNode = createNode(data);

    newNode->next = *head;
    *head = newNode;

}

Node* searchKey(Node* head, int key) {

    Node* current = head;

    while(current != NULL) {
        if (current->data == key) {
            return current;
        }
    }

    return NULL;

}

Node* deleteAtBeggining(Node** head) {

    if(head == NULL) {
        printf("The list is empty!\n");
    }

    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

int main(){

    Node* head = createNode(20);
    head->next = createNode(30);
    head->next->next = createNode(15);
    head->next->next->next = createNode(200);

    printf("%d\n", head->data);
    traverseList(head);
    reverseList(&head);
    traverseList(head);

    insertAtBeginning(&head, 55);
    traverseList(head);

    return 0;

}