#include <iostream>
#include <unistd.h>
#include <sys/types.h>

int main(){
    pid_t child_pid;
    //Create child process
    child_pid = fork();
    if (child_pid > 0) {
        //Parent process
        sleep(600);
    }
    else {
        //Child process
        exit(0);
    }
}