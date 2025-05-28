#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int my_sys(const char *cm) {

    execl("/bin/sh", "sh", "-c", cm, (char *)NULL);
    return 0;
}

int main() {
    printf("executing ls-li\n");
    my_sys("ls -li");
    return 0;
}