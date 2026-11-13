#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main()
{
    int sockfd;
    char buffer[1024];

    struct sockaddr_in server, client;
    socklen_t len = sizeof(client);

    // Create UDP socket
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    if (sockfd < 0)
    {
        printf("Socket creation failed\n");
        return 1;
    }

    // Configure server address
    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    server.sin_addr.s_addr = INADDR_ANY;

    // Bind socket
    bind(sockfd, (struct sockaddr *)&server, sizeof(server));

    printf("UDP Server is waiting...\n");

    // Receive message
    recvfrom(sockfd, buffer, sizeof(buffer) - 1, 0,
             (struct sockaddr *)&client, &len);

    buffer[sizeof(buffer) - 1] = '\0';

    printf("Message from client: %s\n", buffer);

    // Send response
    char *message = "Hello from UDP Server";

    sendto(sockfd, message, strlen(message), 0,
           (struct sockaddr *)&client, len);

    close(sockfd);

    return 0;
}
