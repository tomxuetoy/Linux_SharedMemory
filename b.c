#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>
 
#define BUF_SIZE 1024
#define MYKEY 28
 
int main()
{
    int shmid;
    char *shmptr;
 
    if((shmid = shmget(MYKEY, BUF_SIZE, IPC_CREAT | IPC_EXCL | 0666)) == -1)
    {
        perror("shmget error!\n");
        exit(1);
    }
 
    if((shmptr = shmat(shmid, 0, 0)) == (void *)-1)
    {
        perror("shmat error!\n");
        exit(1);
    }
 
    while(1)
    {
        printf("input:");
        scanf("%s", shmptr);
    }
 
    exit(0);
}
