#include <stdio.h>

// Function to merge two sorted arrays
void mergeLogs(int log1[], int p, int log2[], int q) {
    int i = 0, j = 0;

    printf("Merged Log:\n");

    while(i < p && j < q) {
        if(log1[i] <= log2[j]) {
            printf("%d ", log1[i]);
            i++;
        } else {
            printf("%d ", log2[j]);
            j++;
        }
    }

    // Remaining elements of log1
    while(i < p) {
        printf("%d ", log1[i]);
        i++;
    }

    // Remaining elements of log2
    while(j < q) {
        printf("%d ", log2[j]);
        j++;
    }
}

int main() {
    int p, q;

    printf("Enter number of entries in first log: ");
    scanf("%d", &p);
    int log1[p];

    printf("Enter %d sorted entries:\n", p);
    for(int i = 0; i < p; i++) {
        scanf("%d", &log1[i]);
    }

    printf("Enter number of entries in second log: ");
    scanf("%d", &q);
    int log2[q];

    printf("Enter %d sorted entries:\n", q);
    for(int i = 0; i < q; i++) {
        scanf("%d", &log2[i]);
    }

    mergeLogs(log1, p, log2, q);

    return 0;
}
