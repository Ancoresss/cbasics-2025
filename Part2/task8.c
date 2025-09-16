#include <stdio.h>
#define MAX_SIZE 100

void removeDuplicates(int arr[], int *size) {
     if (*size <= 1) return;

     int temp[MAX_SIZE];
     int j = 0;
    
     for (int i = 0; i < *size - 1; i++) {
            if (arr[i] != arr[i + 1]) {
                temp[j++] = arr[i];
            }
     }

    temp[j++] = arr[*size - 1];
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

        *size = j;
    }
    
    int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter array size (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &size);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
   printf("\n");

    return 0;
}