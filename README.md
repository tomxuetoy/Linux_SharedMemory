(1) The code share_memory.c and exp2.c are from book "嵌入式Linux应用程序开发详解". 
(2) The code a.c and b.c are from linke below:
http://www.linuxidc.com/Linux/2012-03/57430.htm
This example shows the shared memory between two processes!


-----------------------------------------------------------------

result of a.c b.c

$ ./aaa 
string :
string :hello
string :night
string :wow
string :wow
...
 
 
$ ./bbb 
input:hello
input:good
input:night
input:wow
...

-----------------------------------------------------------------



result of exp2.c

$ ./ex2
created shared-memory: 2687018
attached shared-memory, shmadd=0xb77b1000
open success!
write success!
read 5 form file:Hello
close fd succeeds!
deleted shared-memory


-----------------------------------------------------------------




result of shared_memory.c

tomxue@ubuntu:~/mycode$ ./a.out 
created shared-memory: 622601
 
------ Shared Memory Segments --------
key        shmid      owner      perms      bytes      nattch     status      
0x00000000 0          tomxue     600        393216     2          dest         
0x00000000 32769      tomxue     600        393216     2          dest         
0x00000000 65538      tomxue     600        393216     2          dest         
0x00000000 98307      tomxue     600        393216     2          dest         
0x00000000 131076     tomxue     700        3967200    2          dest         
0x00000000 163845     tomxue     600        393216     2          dest         
0x00000000 524294     tomxue     666        2048       0                       
0x00000000 557063     tomxue     666        2048       0                       
0x00000000 589832     tomxue     666        2048       0                       
0x00000000 622601     tomxue     666        2048       0                       
 
attached shared-memory
 
------ Shared Memory Segments --------
key        shmid      owner      perms      bytes      nattch     status      
0x00000000 0          tomxue     600        393216     2          dest         
0x00000000 32769      tomxue     600        393216     2          dest         
0x00000000 65538      tomxue     600        393216     2          dest         
0x00000000 98307      tomxue     600        393216     2          dest         
0x00000000 131076     tomxue     700        3967200    2          dest         
0x00000000 163845     tomxue     600        393216     2          dest         
0x00000000 524294     tomxue     666        2048       0                       
0x00000000 557063     tomxue     666        2048       0                       
0x00000000 589832     tomxue     666        2048       0                       
0x00000000 622601     tomxue     666        2048       1                       
 
deleted shared-memory
 
------ Shared Memory Segments --------
key        shmid      owner      perms      bytes      nattch     status      
0x00000000 0          tomxue     600        393216     2          dest         
0x00000000 32769      tomxue     600        393216     2          dest         
0x00000000 65538      tomxue     600        393216     2          dest         
0x00000000 98307      tomxue     600        393216     2          dest         
0x00000000 131076     tomxue     700        3967200    2          dest         
0x00000000 163845     tomxue     600        393216     2          dest         
0x00000000 524294     tomxue     666        2048       0                       
0x00000000 557063     tomxue     666        2048       0                       
0x00000000 589832     tomxue     666        2048       0                       
0x00000000 622601     tomxue     666        2048       0 

