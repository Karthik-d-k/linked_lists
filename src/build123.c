#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

Node* create_node(int data) {
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->next = NULL;

    return n;
}

void build123(Node** head_ptr) {
    // create nodes
    Node* n1 = create_node(10);
    Node* n2 = create_node(20);
    Node* n3 = create_node(30);

    // create linked list
    push_node(head_ptr, n1);
    push_node(head_ptr, n2);
    push_node(head_ptr, n3);
}

int main() {
    Node* HEAD = NULL;

    printf("BEFORE: ");
    list_print(HEAD);

    build123(&HEAD);

    printf("AFTER : ");
    list_print(HEAD);

    return 0;
}
