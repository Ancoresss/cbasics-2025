#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size1, size2;

    printf("Enter first array size (max %d): ", MAX_SIZE);
    scanf("%d", &size1);
    if (size1 > MAX_SIZE) size1 = MAX_SIZE;
    printf("Enter elements of first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter second array size (max %d): ", MAX_SIZE);
    scanf("%d", &size2);
    if (size2 > MAX_SIZE) size2 = MAX_SIZE;
    printf("Enter elements of second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    if (size1 != size2) {
        printf("Arrays must be the same size to compare.\n");
        return 1;
    }
    for (int i = 0; i < size1; i++) {
        if (arr1[i] == arr2[i]) {
            printf("Element %d is present in both arrays", arr1[i], i);
        }
    }
    return 0;
}