// Q.3 Write program which accept directory name from user and print all file names from that directory.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<dirent.h>
#include<sys/stat.h>

int main(int argc, char *argv[])
{
    char DirName[20];
    DIR *dp = NULL;
    struct dirent *entry = NULL;

    // printf("Enter name of directory: \n");
    // scanf("%s",DirName);

    dp = opendir(argv[1]);
    if(dp == NULL)
    {
        printf("Unable to open directory\n");
        return -1;
    }

    while((entry = readdir(dp)) != NULL)
    {
        printf("%s\n",entry->d_name);
    }

    closedir(dp);
    return 0;

}