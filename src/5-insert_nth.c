#include "utils.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

// A more general version of Push(). Given a list, an index 'n' in the range
// 0..length, and a data element, add a new node to the list
// so that it has the given index
void insert_nth(Node** head_ref, int index, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    // if index is to be inserted at the head,
    // we need to mutate `head` using `head_ref`
    if (index == 0) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    } else {
        Node* current_node = *head_ref;
        Node* next_node = current_node->next;
        // no need for `head_ref` mutation here
        while (index > 1) {
            index--;
            current_node = current_node->next;
            next_node = current_node->next;
        }
        current_node->next = new_node;
        new_node->next = next_node;
    }
}

int main() {
    Node* head = build_one_two_three();
    print(head);
    insert_nth(&head, 0, 13);
    insert_nth(&head, 3, 42);
    insert_nth(&head, 5, 10);
    print(head);

    return 0;
}
