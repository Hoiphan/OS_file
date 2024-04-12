#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int pid;
    printf("Start of main...\n");
    pid = fork();
    if (pid > 0)
    {
        printf("Parent section...\n");
    }
    else if (pid == 0)
    {
        printf("\n fork created ...\n");
    }
    else
    {
        printf("\n fork creation failed !!! \n");
    }
    return 0;
}