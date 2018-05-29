#include "types.h"
#include "stat.h"
#include "user.h"
#include <stdio.h>

int test(int n)
{ 
   int x = n + 1;
   cprintf("entered test");
   return x;
}
int main(int argc, char *argv[])
{
   int pid=0;
   pid=fork();
   
   if(pid==0){
       cprintf("pid = 0");
       test(1);
       exit();
   }
   wait();
   exit();
}
