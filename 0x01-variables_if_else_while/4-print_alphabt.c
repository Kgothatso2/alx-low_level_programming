#include <stdio.h>

/**
*main - ck sys start
*Return: says 0
*/

int main(void)

{
char m;

m = 'a';

while
(m <= 'z') {
if ((m != 'q' && m != 'e') && m <= 'z')
putchar(m);
m++;
}
putchar('\n');

return (0);
}
