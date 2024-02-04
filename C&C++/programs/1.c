#include <stdio.h>

int main() {
    unsigned int unicode = 0;
    putchar(1);
    while (unicode <= 0x10FFFF) {
        printf("%04X ", unicode);
        putchar(unicode);
        putchar('\n');
        unicode++;
    }

    return 0;
}
