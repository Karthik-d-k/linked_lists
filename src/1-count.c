#include "utils.h"
#include <assert.h>
#include <stdio.h>

// Given a list and an int, return the number of times that int occurs
// in the list.
int count(Node* head, int search_for) {
    int c = 0;
    while (head) {
        if (head->data == search_for) {
            c++;
        }
        head = head->next;
    }

    return c;
}

int main() {
    Node* my_list = build_one_two_three();
    push(&my_list, 3);
    print(my_list);
    int c = count(my_list, 3);
    printf("count = %d\n", c);
    assert(c == 2);

    return 0;
}
