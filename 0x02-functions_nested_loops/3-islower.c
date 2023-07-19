#include <stdio.h>

int _islower(int c);

int main() {
    char ch = 'A';
    if (_islower(ch)) {
        printf("%c is lowercase.\n", ch);
    } else {
        printf("%c is not lowercase.\n", ch);
    }
    return 0;
}
int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1;  // c is lowercase
    } else {
        return 0;  // c is not lowercase
    }
}


