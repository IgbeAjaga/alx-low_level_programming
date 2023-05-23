#include "main.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    int i, n;
    char c, *s, dest[100], src[100];
    unsigned int size;

    i = _putchar('H');
    _putchar(i + '0');

    size = _islower('h');
    _putchar(size + '0');

    i = _isalpha('!');
    _putchar(i + '0');

    n = _abs(-98);
    _putchar(n / 10 + '0');
    _putchar(n % 10 + '0');

    i = _isupper('G');
    _putchar(i + '0');

    i = _isdigit('5');
    _putchar(i + '0');

    s = "Hello, World!";
    n = _strlen(s);
    _putchar(n / 10 + '0');
    _putchar(n % 10 + '0');

    _puts("Printing a string");

    s = "Copy this!";
    _strcpy(dest, s);
    _strcpy(src, s);
    _puts(dest);
    _puts(src);

    s = "12345";
    n = _atoi(s);
    _putchar(n / 10000 + '0');
    _putchar(n / 1000 % 10 + '0');
    _putchar(n / 100 % 10 + '0');
    _putchar(n / 10 % 10 + '0');
    _putchar(n % 10 + '0');

    s = "Hello, ";
    _strcat(s, "World!");
    _puts(s);

    _strncpy(dest, "Copy this!", 7);
    _puts(dest);

    _puts("Comparing strings...");
    if (_strcmp("Hello", "Hello") == 0)
        _puts("Strings are equal");
    else
        _puts("Strings are not equal");

    _memset(dest, 'X', 5);
    _puts(dest);

    _memcpy(dest, "Copy this!", 5);
    _puts(dest);

    s = "Hello, World!";
    c = 'o';
    s = _strchr(s, c);
    _puts(s);

    s = "Hello";
    n = _strspn(s, "Helo");
    _putchar(n / 10 + '0');
    _putchar(n % 10 + '0');

    s = "Hello";
    s = _strpbrk(s, "lo");
    _puts(s);

    s = "Hello, World!";
    s = _strstr(s, "World");
    _puts(s);

    return 0;
}

