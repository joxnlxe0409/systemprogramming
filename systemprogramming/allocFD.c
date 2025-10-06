#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int openFile(void) {
    int fd = open("hello.txt", O_RDWR);
    if (fd == -1) {
        perror("File Open");
        exit(1);
    }
    return fd;
}

int main(void) {
    int fd = 0;

    fd = openFile();
    printf("fd = %d\n", fd);
    close(fd);

    close(0);  // stdin 닫기

    fd = openFile();
    printf("fd = %d\n", fd);
    close(fd);

    return 0;
}
