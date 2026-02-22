#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("0");
        return 0;
    }

    int value;
    scanf("%d", &value);

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = value;
    head->next = NULL;

    struct Node* temp = head;

    for (int i = 1; i < n; i++) {
        scanf("%d", &value);
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
    }

    int count = 0;
    temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("%d\n", count);

    return 0;
}