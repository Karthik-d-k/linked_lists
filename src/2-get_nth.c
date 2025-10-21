#include "utils.h"
#include <assert.h>
#include <stdio.h>

// Given a list and an index, return the data
// in the nth node of the list. The nodes are numbered from 0.
// Assert fails if the index is invalid (outside 0..lengh-1).
int get_nth(Node* head, int index) {
    assert(index >= 0 && index < length(head));

    while (index) {
        head = head->next;
        index--;
    }

    return head->data;
}

int main() {
    Node* my_list = build_one_two_three();
    print(my_list);
    int v = get_nth(my_list, 2);
    printf("value = %d\n", v);
    assert(v == 3);

    return 0;
}
