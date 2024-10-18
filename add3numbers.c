#include <stdio.h>
 #include <unistd.h>
 #include <sys/syscall.h>
 
#define __NR_add_three_numbers 464  // Syscall number
 
int main() {
     int a, b, c;
     printf("Enter three numbers: ");
     scanf("%d %d %d", &a, &b, &c);
     long result = syscall(__NR_add_three_numbers, a, b, c);
     printf("The sum is: %ld", result);
     return 0;
 }
