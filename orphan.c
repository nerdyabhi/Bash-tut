#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        sleep(5); // Delay to outlive the parent
        printf("Orphan process (PID: %d), New Parent PID: %d\n", getpid(), getppid());
    } else if (pid > 0) {
        // Parent process
        printf("Parent process (PID: %d) exiting.\n", getpid());
        exit(0); // Parent exits
    }
    return 0;
}

