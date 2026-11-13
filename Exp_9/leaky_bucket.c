
#include <stdio.h>

int main()
{
    int bucket_size, output_rate;
    int n, incoming, stored = 0;

    printf("Enter bucket capacity: ");
    scanf("%d", &bucket_size);

    printf("Enter output rate: ");
    scanf("%d", &output_rate);

    printf("Enter number of incoming packets: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter incoming packet size for packet %d: ", i);
        scanf("%d", &incoming);

        printf("Incoming packets: %d\n", incoming);

        if (incoming + stored > bucket_size)
        {
            printf("Bucket overflow! Packets dropped: %d\n",
                   incoming + stored - bucket_size);

            stored = bucket_size;
        }
        else
        {
            stored += incoming;
            printf("Packets accepted: %d\n", incoming);
        }

        printf("Packets in bucket: %d\n", stored);

        if (stored >= output_rate)
        {
            stored -= output_rate;
            printf("Packets transmitted: %d\n", output_rate);
        }
        else
        {
            printf("Packets transmitted: %d\n", stored);
            stored = 0;
        }

        printf("Remaining packets: %d\n", stored);
    }

    while (stored > 0)
    {
        int sent = (stored >= output_rate) ? output_rate : stored;
        stored -= sent;

        printf("\nPackets transmitted: %d", sent);
        printf("\nRemaining packets: %d\n", stored);
    }

    return 0;
}
