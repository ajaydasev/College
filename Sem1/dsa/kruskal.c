#include <stdio.h>

int parent[20];

int find(int i)
{
    while (parent[i] != i)
        i = parent[i];

    return i;
}

void union_set(int i, int j)
{
    int a = find(i);
    int b = find(j);

    parent[a] = b;
}

int main()
{
    int n, e, i, j;
    int u[20], v[20], w[20];
    int temp, mincost = 0, count = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (source destination weight):\n");

    for (i = 0; i < e; i++)
        scanf("%d %d %d", &u[i], &v[i], &w[i]);


    for (i = 0; i < e - 1; i++)
    {
        for (j = 0; j < e - i - 1; j++)
        {
            if (w[j] > w[j + 1])
            {
                temp = w[j];
                w[j] = w[j + 1];
                w[j + 1] = temp;

                temp = u[j];
                u[j] = u[j + 1];
                u[j + 1] = temp;

                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }


    for (i = 0; i < n; i++)
        parent[i] = i;

    printf("\nEdges in Minimum Spanning Tree:\n");

    for (i = 0; i < e && count < n - 1; i++)
    {
        int a = find(u[i]);
        int b = find(v[i]);

        if (a != b)
        {
            printf("%d - %d : %d\n", u[i], v[i], w[i]);

            union_set(a, b);

            mincost += w[i];
            count++;
        }
    }

    if (count == n - 1)
        printf("\nMinimum Cost = %d\n", mincost);
    else
        printf("\nSpanning Tree is not possible.\n");

    return 0;
}

