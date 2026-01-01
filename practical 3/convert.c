#include <stdio.h>

int main() {
    char a = 'A';

    printf("character is %c \n", a);
    printf("ASCII Code of character is %d \n", a);

    char b = a + 3;
    printf("THREE CHARACTERS AFTER IS %c", b);

    return 0;
}

// OUTPUT
// ASCII Code of character is 65 
//THREE CHARACTERS AFTER IS D