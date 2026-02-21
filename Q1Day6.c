#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid size");
        return 0;
    }

    int arr[100];   // fixed size array

    printf("Enter sorted elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int j = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    printf("Unique elements:\n");
    for(int i = 0; i <= j; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}