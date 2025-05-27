#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    umask(077); 
    open("file1.txt", O_CREAT | O_WRONLY, 0666); 
    chmod("file1.txt", 0644); 
    return 0;
}