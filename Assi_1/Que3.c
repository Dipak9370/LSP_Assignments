// Q.3 Write a program which accept file name and on mode and that program check whether our process can access that file in accept mode or not.

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
    int Mode = 0;

    printf("Usage: ./myexe  open_FileName   Mode_Of_Open\n");

    if(argc != 3)
    {
        printf("Insufficient argument\n");
        return -1;
    }

    if(strcmp(argv[2], "Read") == 0)
    {
        Mode = R_OK;
    }
    else if(strcmp(argv[2], "Write") == 0)
    {
        Mode = W_OK;
    }
    else if(strcmp(argv[2], "Execute") == 0)
    {
        Mode = X_OK;
    }

    if(access(argv[1], Mode) < 0)
    {
        printf("Unable to access %s file in %s Mode \n", argv[1],argv[2]);
    }
    else
    {
        printf("You can access %s file in %s mode \n",argv[1],argv[2]);
    }
    return 0;
}