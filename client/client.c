/*************************************************************************
	> File Name: client.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月28日 星期六 14时51分56秒
 ************************************************************************/

#include "head.h"
#include"common.h"
#include "tcp_client.h"

int main(int argc, char **argv) {
    int sockfd;
    char msg[512] = {0};
    if(argc != 3) {
        fprintf(stderr, "Usage: %s ip port\n", argv[0]);
        return 1;
    }

    if((sockfd = socket_connect(argv[1], atoi(argv[2]))) < 0) {
        perror("socket_connect");
        return 2;
    }
    make_nonblock_ioctl(sockfd);
    sleep(1);
    recv(sockfd, msg, 512, 0);
    printf("recv : %s\n", msg);
    close(sockfd);
    return 0;
}
