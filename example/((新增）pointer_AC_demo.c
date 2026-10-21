#include <stdio.h>

char display[17] = "12+34   ERROR   ";

void my_AC_Clear(void) {
    char* p = display;
    for (int i = 0; i < 16; i++) {
        *p = ' ';
        p++;
    }
    display[0] = '0';
    display[16] = '\0';
}

int main() {
    printf("清空前显示: [%s]\n", display);
    my_AC_Clear();
    printf("清空后显示: [%s]\n", display);
    return 0;
}