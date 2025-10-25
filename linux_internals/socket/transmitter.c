#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define PORT 8080
#define MAX 1024

int main() {
    int sockfd;
    struct sockaddr_in servaddr;
    char buffer[MAX];

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }
    printf("Socket created\n");

    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = inet_addr("192.168.68.144");

    if (connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
        perror("Connect failed");
        exit(EXIT_FAILURE);
    }
    printf("Connected to server\n");

    FILE *fp = fopen("/home/eric/ppractice/eric_practice/linux_internals/add.c", "r");
    if (fp == NULL) {
        perror("File open failed");
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    while (fgets(buffer, MAX, fp) != NULL) {
        write(sockfd, buffer, strlen(buffer));
    }

    //write(sockfd, "EOF", 3); // End-of-file marker
    printf("File sent successfully\n");

    fclose(fp);
    close(sockfd);
    return 0;
}
