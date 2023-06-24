#include <unistd.h>

int _putchar(char c);

int main(void)
{
    int b = 'a';
    int i = 'b';
    int x = 'c';
    int t = 79;

    _putchar(b + '0');
    _putchar(i + '0');
    _putchar(x + '0');
    _putchar(t + '0');
    _putchar('\n');

    return (0);
}
int _putchar(char c)
{
    return (write(1, &c, 1));
}
