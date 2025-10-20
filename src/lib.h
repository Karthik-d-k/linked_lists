#ifndef LIB_H
#define LIB_H

#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int list_len(Node* head) {
    int len = 0;

    while (head) {
        len++;
        head = head->next;
    }

    return len;
}

void list_print(Node* head) {
    int len = list_len(head);

    printf("List[%d]: head -> ", len);
    while (head) {
        printf("[%d] -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void push_node(Node** head_ptr, Node* node) {
    Node* head = *head_ptr;
    if (head) {
        // insert at the end
        while (head->next) {
            head = head->next;
        }
        head->next = node;
    } else {
        // first node
        *head_ptr = node;
    }
}

#endif // LIB_H
