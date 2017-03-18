#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{      
    int pid = fork();
    pid_t child_pid = fork();
    if (child_pid > 0)
        sleep(50);
 
    else if (pid > 0)
        printf("in parent pro");
 
    else if (pid == 0)
    {
        sleep(30);
        printf("in child pro");
    }
    else       
        exit(0);
 
    return 0;
}
