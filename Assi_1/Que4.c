// Q.4 Write a program which accept file name from user and print all information about that file.

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>


int main(int argc, char *argv[])
{
    struct stat sobj;
    int fd = 0;

    if(argc != 2)
    {
        printf("Insufficient argument\n");
        return -1;
    }
    fd = open(argv[1],O_RDONLY);
    stat(argv[1],&sobj);

    printf("File name : %s\n", argv[1]);
    printf("File size is : %d\n", sobj.st_size);
    printf("Number of links : %d\n", sobj.st_nlink);
    printf("Inode Number : %d\n", sobj.st_ino);
    printf("File System number : %d\n", sobj.st_dev);
    printf("Number of Blocks : %d\n", sobj.st_blocks);


    return 0;
}


