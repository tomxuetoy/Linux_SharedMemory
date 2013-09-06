#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdlib.h>
 
#define BUF_SIZE 1024
#define MYKEY 28
 
int  main()
{
    int shmid;
    char * shmptr;
 
    if((shmid = shmget(MYKEY, BUF_SIZE, 0666)) == -1)
    {
        printf("shmget error!\n");
        exit(1);
    }
 
    if((shmptr = shmat(shmid,0,0)) == (void *)-1)
    {
        printf("shmat error!\n");
        exit(1);
    }
 
    while(1)
    {
        printf("string :%s\n", shmptr);
        sleep(3);
    }
 
    exit(0);
}
