#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

int length(struct Node* head) {
    int len = 0;
    while (head != NULL) {
        len++;
        head = head->next;
    }
    return len;
}

struct Node* advance(struct Node* head, int d) {
    while (d--) {
        head = head->next;
    }
    return head;
}

int main() {
    int n, m, value;
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        head1 = insertEnd(head1, value);
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &value);
        head2 = insertEnd(head2, value);
    }

    int len1 = length(head1);
    int len2 = length(head2);

    struct Node* p1 = head1;
    struct Node* p2 = head2;

    if (len1 > len2)
        p1 = advance(p1, len1 - len2);
    else
        p2 = advance(p2, len2 - len1);

    while (p1 != NULL && p2 != NULL) {
        if (p1->data == p2->data) {
            printf("%d\n", p1->data);
            return 0;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    printf("No Intersection\n");
    return 0;
}