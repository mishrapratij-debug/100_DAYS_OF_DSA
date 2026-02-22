
#include <stdio.h>

int linearSearch(int arr[], int n, int key, int *comparisons) {
    for(int i = 0; i < n; i++) {
        (*comparisons)++;   // count comparison
        
        if(arr[i] == key) {
            return i;       // return index if found
        }
    }
    return -1;              // return -1 if not found
}

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int comparisons = 0;

    int result = linearSearch(arr, n, key, &comparisons);

    if(result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    printf("Total comparisons: %d\n", comparisons);

    return 0;
}
