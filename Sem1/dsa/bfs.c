
#include <stdio.h>

int graph[20][20], visited[20];
int queue[20];
int front = -1, rear = -1;
int n;


void enqueue(int v) {
    if (rear == 19)
        return;

    if (front == -1)
        front = 0;

    queue[++rear] = v;
}


int dequeue() {
    return queue[front++];
}


void BFS(int start) {
    int i, v;

    enqueue(start);
    visited[start] = 1;

    while (front <= rear) {
        v = dequeue();

        printf("%d ", v);

        for (i = 0; i < n; i++) {
            if (graph[v][i] == 1 && visited[i] == 0) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    BFS(start);

    return 0;
}
