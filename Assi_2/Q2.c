// Q.2 Write a program which accept file name from user and write string in that file.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[])
{
    int fd = 0;
    char text[100] = "cdkuygcvc h bjhvvy hf jyguyhhvh";

    fd = open(argv[1], O_WRONLY);
    if(fd == -1)
    {
        printf("Unable to file open\n");
        return -1;
    }
    printf("File open succesfully\n");

    write(fd, &text, strlen(text));
    printf("file name: %s and string in that file: %s.",argv[1],text);
    close(fd);
    return 0;
}