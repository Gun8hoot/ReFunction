#include <stdio.h>
#include <string.h>
#include <unistd.h>

// Vulnerable function
void vulnerable_function(char *input, char *out) {
    char buffer[64];
    strcpy(buffer, input); // No bounds checking!
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }
    
    vulnerable_function(argv[1]);
	printf("%s\n", argv[1]);
    printf("Program completed normally.\n");
    return 0;
}