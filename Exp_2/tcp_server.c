#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main()
{
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};

    // Create TCP socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    if (server_fd < 0)
    {
        perror("Socket creation failed");
        exit(1);
    }

    // Set server address
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(8080);

    // Bind socket
    if (bind(server_fd, (struct sockaddr *)&address,
             sizeof(address)) < 0)
    {
        perror("Bind failed");
        close(server_fd);
        exit(1);
    }

    // Listen for client
    if (listen(server_fd, 3) < 0)
    {
        perror("Listen failed");
        close(server_fd);
        exit(1);
    }

    printf("TCP Server is waiting for connection...\n");

    // Accept client connection
    new_socket = accept(server_fd,
                        (struct sockaddr *)&address,
                        (socklen_t *)&addrlen);

    if (new_socket < 0)
    {
        perror("Accept failed");
        close(server_fd);
        exit(1);
    }

    printf("Client connected successfully.\n");

    // Receive message
    int n = recv(new_socket, buffer, sizeof(buffer) - 1, 0);

    if (n > 0)
    {
        buffer[n] = '\0';
        printf("Message from client: %s\n", buffer);

        // Send response
        char *message = "Hello Client! Message received.";
        send(new_socket, message, strlen(message), 0);
    }

    // Close sockets
    close(new_socket);
    close(server_fd);

    return 0;
}
