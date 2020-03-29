/*************************************************************************
	> File Name: common.h
	> Author: 
	> Mail: 
	> Created Time: 2020年03月29日 星期日 12时05分42秒
 ************************************************************************/

#ifndef _COMMON_H
#define _COMMON_H

int make_nonblock_ioctl(int fd); 
int make_block_ioctl(int fd); 
int make_nonblock(int fd); 
int make_block(int fd); 
#endif
