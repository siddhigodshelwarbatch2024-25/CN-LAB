#include <stdio.h>

int main()
{
    int total_frames, window_size;
    int sent = 0, ack;

    printf("Enter total number of frames: ");
    scanf("%d", &total_frames);

    printf("Enter window size: ");
    scanf("%d", &window_size);

    while (sent < total_frames)
    {
        printf("\nSender: Sending frames\n");

        for (int i = 0; i < window_size && sent < total_frames; i++)
        {
            printf("Frame %d sent\n", sent + 1);
            sent++;
        }

        printf("\nEnter number of frames acknowledged: ");
        scanf("%d", &ack);

        if (ack < 0 || ack > window_size || ack > sent)
        {
            printf("Invalid acknowledgement. Try again.\n");
            sent -= (ack > 0 && ack <= sent) ? 0 : 0;
            continue;
        }

        if (ack == 0)
        {
            printf("No frames acknowledged. Retransmission required.\n");
            sent -= (sent % window_size == 0) ? window_size : sent % window_size;
        }
        else
        {
            printf("%d frames acknowledged successfully.\n", ack);
            total_frames -= ack;
            sent = 0;
        }
    }

    printf("\nAll frames transmitted successfully!\n");

    return 0;
}
