#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    const char *filename = argv[1];
    umask(022);

    open(filename, O_CREAT | O_WRONLY, 0777);
    printf("File created.");
    
    chmod(filename, 0640);
    printf("Permissions changed to 0640 ");

    return 0;
}