#include <stdio.h>
#include <utime.h>
#include <sys/stat.h>

int main() {
    struct stat st;
    struct utimbuf tt;

    stat("src.txt", &st);
    tt.actime = st.st_atime; 
    tt.modtime = st.st_mtime;
    utime("dest.txt", &tt);
    
    return 0;
}