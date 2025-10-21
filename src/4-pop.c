#include "utils.h"
#include <assert.h>
#include <stdio.h>

// Takes a non-empty list and removes the front node, and returns the data which
// was in that node, it should assert() fail if there is no node to pop
int pop(Node** head_ref) {
    Node* head = *head_ref;
    assert(head);

    int data = head->data;
    // mutate the original `head_ref` here, if you mutate `head` it doesn't work
    // bcz, `head` is local to this function and will be stored in this
    // function's stack, "just a heads-up"
    *head_ref = head->next;
    free(head);

    return data;
}

int main() {
    Node* head = build_one_two_three();
    print(head);
    int a = pop(&head);
    assert(a == 1);
    int b = pop(&head);
    assert(b == 2);
    int c = pop(&head);
    assert(c == 3);
    int len = length(head);
    print(head);
    assert(len == 0);

    return 0;
}
