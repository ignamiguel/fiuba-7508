#include <unistd.h>
#include <stdio.h>

const char msg[] = "Hello, world!\n";
// const char *msg = "Hello, world!\n";
const char letter = 'A';


int main(void) {
    // printf("Hola\n");
    // printf("%c \n", letter);
    // printf("%d \n", sizeof letter);
    // printf("%d \n", sizeof msg);
    write(1, msg, sizeof msg - 1);
    _exit(7);
}