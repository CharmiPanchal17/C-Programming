#include <stdio.h>
#include <stdbool.h> //provides the bool data type

#define P 5 // Number of processes
#define R 3 // Number of resources

// Function to check if the system is in a safe state
bool is_safe(int available[], int max[][R], int allocation[][R], int need[][R]) {
    int work[R];
    bool finish[P] = {false};
    int safe_sequence[P];
    int count = 0;

    for (int i = 0; i < R; i++)
        work[i] = available[i];

    while (count < P) {
        bool found = false;
        for (int i = 0; i < P; i++) {
            if (!finish[i]) {
                int j;
                for (j = 0; j < R; j++) {
                    if (need[i][j] > work[j])
                        break;
                }
                if (j == R) {
                    for (int k = 0; k < R; k++)
                        work[k] += allocation[i][k];
                    safe_sequence[count++] = i;
                    finish[i] = true;
                    found = true;
                }
            }
        }
        if (!found)
            return false;
    }

    printf("System is in a safe state.\nThe Safe sequence is: ");
    for (int i = 0; i < P; i++)
        printf("%d ", safe_sequence[i]);
    printf("\n");
    return true;
}

int main() {
    int available[R] = {3, 3, 2};
    int max[P][R] = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3}};
    int allocation[P][R] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2}};
    int need[P][R];

    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            need[i][j] = max[i][j] - allocation[i][j];

    is_safe(available, max, allocation, need);
    
    return 0;
}
