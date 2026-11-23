#include <stdio.h>

int main()
{
    int n, a[10][10], indegree[10] = {0};
    int queue[10], front = 0, rear = -1;
    int i, j, count = 0, u;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);

            if (a[i][j] == 1)
                indegree[j]++;
        }
    }

  
    for (i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
            queue[++rear] = i;
    }

    printf("\nTopological Sorting: ");

    while (front <= rear)
    {
        u = queue[front++];
        printf("%d ", u);
        count++;

        for (j = 0; j < n; j++)
        {
            if (a[u][j] == 1)
            {
                indegree[j]--;

                if (indegree[j] == 0)
                    queue[++rear] = j;
            }
        }
    }

    if (count != n)
        printf("\nTopological sorting is not possible (Graph contains a cycle).");

    return 0;
}

