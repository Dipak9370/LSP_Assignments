// Q.1 Write a program which accept file name from user and open that file.

#include<stdio.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
    char Fname[10];
    int fd = 0;

    printf("Please Enter file name: \n");
    scanf("%s",Fname);

    //fd = creat(Fname, 0777);
    fd = open(Fname, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to Open file:\n");
        return -1;
    }

    printf("File is succesfully opened with FD : %d.\n",fd);


    return 0;
}