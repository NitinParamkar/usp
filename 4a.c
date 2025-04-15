#include <stdio.h>
#include <sys/stat.h>
#include <utime.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int fd;
    struct stat statbuf_1;
    struct stat statbuf_2;
    struct utimbuf times;

    printf("Before Copying ...\n");
    printf("Access Time %sModification Time %s\n",
           ctime(&statbuf_1.st_atime),
           ctime(&statbuf_1.st_mtime));

    times.modtime = statbuf_2.st_mtime;
    times.actime = statbuf_2.st_mtime;

    printf("After Copying ...\n");
    printf("Access Time %sModification Time %s\n",
           ctime(&statbuf_1.st_atime),
           ctime(&statbuf_1.st_mtime));

    return 0;
}