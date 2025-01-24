#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h> // Include this for the wait() function

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        printf("Child process (PID: %d) exiting.\n", getpid());
        exit(0); // Child exits
    } else if (pid > 0) {
        // Parent process
        printf("Parent process (PID: %d) sleeping for 10 seconds.\n", getpid());
        sleep(10); // Parent delays calling wait()
        printf("Parent process calling wait().\n");
        wait(NULL); // Wait for child (cleans up zombie)
    }
    return 0;
}

