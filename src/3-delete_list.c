#include "utils.h"
#include <assert.h>
#include <stdio.h>

// Given a list, deallocates all of its memory and sets its
// head pointer to NULL(the empty list)
void delete_list(Node** head_ref) {
    Node* head = *head_ref;
    Node* delete = *head_ref;

    while (head) {
        // take next node
        head = head->next;
        // delete previous node
        free(delete);
        // forward previous node
        delete = head;
    }
    *head_ref = NULL;
}

int main() {
    Node* my_list = build_one_two_three();
    print(my_list);
    delete_list(&my_list);
    print(my_list);
    assert(my_list == NULL);

    return 0;
}
