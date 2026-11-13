#include <stdio.h>

int main()
{
    int bucket_capacity, token_rate;
    int tokens, n, packet_size;

    printf("Enter bucket capacity: ");
    scanf("%d", &bucket_capacity);

    printf("Enter token generation rate: ");
    scanf("%d", &token_rate);

    printf("Enter initial number of tokens: ");
    scanf("%d", &tokens);

    if (bucket_capacity <= 0 || token_rate <= 0 ||
        tokens < 0 || tokens > bucket_capacity)
    {
        printf("Invalid bucket or token values.\n");
        return 1;
    }

    printf("Enter number of packets: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter packet size for packet %d: ", i);
        scanf("%d", &packet_size);

        if (packet_size <= 0)
        {
            printf("Invalid packet size.\n");
            continue;
        }

        printf("Current tokens: %d\n", tokens);

        if (tokens >= packet_size)
        {
            tokens -= packet_size;

            printf("Packet transmitted successfully.\n");
            printf("Tokens used: %d\n", packet_size);
        }
        else
        {
            printf("Insufficient tokens. Packet cannot be transmitted.\n");
        }

        // Generate new tokens
        tokens += token_rate;

        // Bucket cannot exceed its capacity
        if (tokens > bucket_capacity)
        {
            tokens = bucket_capacity;
        }

        printf("Tokens after generation: %d\n", tokens);
    }

    return 0;
}
