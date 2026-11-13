#include <stdio.h>

#define MAX 10
#define INF 999

int main()
{
    int cost[MAX][MAX];
    int dist[MAX][MAX];
    int n, i, j, k;
    int updated;

    printf("Enter number of routers: ");
    scanf("%d", &n);

    printf("Enter cost matrix (999 for no direct connection):\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);

            if (i == j)
                cost[i][j] = 0;

            dist[i][j] = cost[i][j];
        }
    }

    // Distance Vector Algorithm
    do
    {
        updated = 0;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                for (k = 0; k < n; k++)
                {
                    if (cost[i][k] != INF &&
                        dist[k][j] != INF &&
                        cost[i][k] + dist[k][j] < dist[i][j])
                    {
                        dist[i][j] =
                            cost[i][k] + dist[k][j];

                        updated = 1;
                    }
                }
            }
        }

    } while (updated);

    printf("\nFinal Routing Tables:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRouter %d:\n", i + 1);
        printf("Destination\tDistance\n");

        for (j = 0; j < n; j++)
        {
            if (dist[i][j] == INF)
                printf("%d\t\tINF\n", j + 1);
            else
                printf("%d\t\t%d\n", j + 1, dist[i][j]);
        }
    }

    return 0;
}
