#include <stdio.h>
#include <string.h>


void reverseString(char str[], int index) {
    if (index < 0)
        return;

    printf("%c", str[index]);
    reverseString(str, index - 1);
}

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);   

    int length = strlen(str);

    reverseString(str, length - 1);

    return 0;
}