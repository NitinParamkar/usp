#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int file, n;
    char buffer[25];

    file = open("test.txt", O_RDONLY);

    read(file, buffer, 20); 
    write(1, buffer, 20);
    printf("\n");

    lseek(file, 10, SEEK_SET); 
    read(file, buffer, 20);
    write(1, buffer, 20);
    printf("\n");

    lseek(file, 10, SEEK_CUR); 
    read(file, buffer, 20);
    write(1, buffer, 20);
    printf("\n");

    n = lseek(file, 0, SEEK_END);

    printf("\n size: %d bytes \n", n); 
    return 0;
}