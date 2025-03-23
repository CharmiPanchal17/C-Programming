#include <stdio.h>

#define N 7  // Number of cities

// Graph adjacency matrix representation
int graph[N][N] = {
    {0, 12, 10, 8, 12, 3, 9},
    {12, 0, 12, 11, 6, 7, 9},
    {10, 12, 0, 11, 10, 11, 6},
    {8, 11, 11, 0, 9, 10, 11},
    {12, 6, 10, 9, 0, 7, 9},
    {3, 7, 11, 10, 7, 0, 9},
    {9, 9, 6, 11, 9, 9, 0}
};

// Function to print the graph
void printGraph() {
    printf("Adjacency Matrix Representation of the Graph:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printGraph();
    return 0;
}