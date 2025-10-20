#include "utils.h"
#include <stdio.h>

int main() {
    Node* head = NULL;

    printf("BEFORE: ");
    print(head);

    printf("AFTER : ");
    print(build_one_two_three());

    return 0;
}
