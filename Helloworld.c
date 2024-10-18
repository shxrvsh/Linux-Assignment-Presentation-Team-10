#include <stdio.h>
 #include <unistd.h>
 #include <sys/syscall.h>
 
#define __NR_hello_syscall 463  // Syscall number
 
int main() {
     long result = syscall(__NR_hello_syscall);  // Call the syscall
 
    if (result == 0) {
         printf("System call executed successfully.");
     } else {
         printf("System call failed.");
     }
     return 0;
 }
