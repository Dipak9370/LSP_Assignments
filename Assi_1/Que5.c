// Q.5 Write a program which accept file name and number of bytes from user and read that number of bytes from file.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int fd = 0;
    int Ret = 0;
    char *Buffer = NULL;
    int Size = 0;

    if(argc != 3)
    {
        printf("Insufficient argument commandline\n");
        return -1;
    }

    fd = open(argv[1], O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    // printf("How many bytes are read:\n");
    // scanf("%d",&ino);
    
    //Buffer = (char *)malloc(sizeof(atoi(argv[2])));

    Size = atoi(argv[2]);
    Buffer = (char *)malloc(Size);

    Ret = read(fd,Buffer,Size);
    if(Ret == 0)
    {
        printf("Unable to read data from file\n");
        return -1;
    }

    printf("Data from file is : %s\n",Buffer);

    return 0;
}