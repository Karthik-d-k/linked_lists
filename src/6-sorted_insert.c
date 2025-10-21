#include "utils.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

// given a list that is sorted in increasing order, and a single node, inserts
// the node into the correct sorted position in the list
void sorted_insert(Node** head_ref, Node* new_node) {
    // Sepcial case: insert at the front
    if (new_node->data < (*head_ref)->data) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    } else {
        Node* current_node = *head_ref;
        Node* next_node = current_node->next;

        while (next_node && (next_node->data < new_node->data)) {
            current_node = current_node->next;
            next_node = current_node->next;
        }
        current_node->next = new_node;
        new_node->next = next_node;
    }
}

int main() {
    Node* node1 = (Node*)malloc(sizeof(Node));
    Node* node2 = (Node*)malloc(sizeof(Node));
    Node* node3 = (Node*)malloc(sizeof(Node));
    node1->data = 0;
    node2->data = 2;
    node3->data = 30;
    node1->next = NULL;
    node2->next = NULL;
    node3->next = NULL;

    Node* head = build_one_two_three();
    print(head);
    sorted_insert(&head, node1);
    sorted_insert(&head, node2);
    sorted_insert(&head, node3);
    print(head);

    return 0;
}
