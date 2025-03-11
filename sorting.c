#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int *array, int size) {
    int swapped, i, j;
    
    for (i = 1; i < size; i++) {
        swapped = 0; // This flag checks if the array is already sorted

        for (j = 0; j < size - i; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1; // Mark that a swap has occurred
            }
        }

        if (!swapped) // If no swaps happened, the array is already sorted
            break;
    }
}

// Function to print the array
void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int array[] = {64, 25, 12, 22, 11};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    printArray(array, size);

    bubbleSort(array, size);

    printf("Sorted array: ");
    printArray(array, size);

    return 0;
}
