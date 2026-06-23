#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;

    fd = open("test.txt", O_CREAT | O_WRONLY, 0644);

    write(fd, "Hello Linux", 11);

    close(fd);

    printf("Data written to test.txt\n");

    return 0;
}
