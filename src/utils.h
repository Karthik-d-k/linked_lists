#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Basic utilities prototype
void print(Node* head);

int length(Node* head);

void push(Node** head_ref, int data);

Node* build_one_two_three(void);

// Prints the complete list
void print(Node* head) {
    int len = length(head);

    printf("List[%d]: head -> ", len);
    while (head) {
        printf("[%d] -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
// Returns the number of nodes in the list
int length(Node* head) {
    int len = 0;

    while (head) {
        len++;
        head = head->next;
    }

    return len;
}

// Given an int and a reference to the head pointer (i.e. a Node** pointer to
// the head pointer), add a new node at the head of the list with the standard
// 3-step-link-in: create the new node, set its .next to point to the current
// head, and finally change the head to point to the new node
void push(Node** head_ref, int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = *head_ref;
    *head_ref = node;
}

// Allocates and returns the list {1, 2, 3}
Node* build_one_two_three(void) {
    Node* head = NULL;
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);

    return head;
}

#endif // UTILS_H
