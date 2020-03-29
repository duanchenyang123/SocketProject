/*************************************************************************
	> File Name: common.c
	> Author: 
	> Mail: 
	> Created Time: 2020年03月29日 星期日 11时57分06秒
 ************************************************************************/
#include"head.h" 

int make_nonblock_ioctl(int fd) {
    unsigned long ul = 1;
    ioctl(fd,FIONBIO, &ul);
}
int make_block_ioctl(int fd) {
    unsigned long ul = 0;
    ioctl(fd,FIONBIO, &ul);
}

int make_nonblock(int fd) {
    int flags = fcntl(fd, F_GETFL, 0);
    flags |= O_NONBLOCK;
    fcntl(fd,F_SETFL, flags);
}

int make_block(int fd) {
    int flags = fcntl(fd, F_GETFL, 0);
    flags &= O_NONBLOCK;
    fcntl(fd,F_SETFL, flags);
}

