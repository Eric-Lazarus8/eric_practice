#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#define PORT 8080
#define MAX 1024

int main() {
    int sockfd, connfd;
    struct sockaddr_in servaddr, cli;
    socklen_t len;
    char buffer[MAX];

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }
    printf("Socket created\n");

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);

    if (bind(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }
    printf("Bind successful\n");

    if (listen(sockfd, 5) != 0) {
        perror("Listen failed");
        exit(EXIT_FAILURE);
    }
    printf("Server listening...\n");

    len = sizeof(cli);
    connfd = accept(sockfd, (struct sockaddr*)&cli, &len);
    if (connfd < 0) {
        perror("Accept failed");
        exit(EXIT_FAILURE);
    }
    printf("Client connected\n");

    FILE *fp = fopen("received.txt", "w");
    if (fp == NULL) {
        perror("File open failed");
        close(connfd);
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    while (1) {
        bzero(buffer, MAX);
        int bytes = read(connfd, buffer, MAX);
        if (bytes <= 0 || strncmp(buffer, "EOF", 3) == 0)
            break;
        fputs(buffer, fp);
    }

    printf("File received and saved as 'received.txt'\n");
    fclose(fp);
    close(connfd);
    close(sockfd);
    return 0;
}
