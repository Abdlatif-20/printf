# include "printf.h"

int main()
{
    _printf("s > Hello %s\n", "World");
    _printf("d > Hello %d\n", 42);
    _printf("x > Hello %x\n", 42);
    _printf("i > Hello %i\n", 42);
    _printf("c > Hello %c\n", 'c');
    _printf(" > Hello %%\n");
    printf("\n--------------------------------------\n");
    printf("s > Hello %s\n", "World");
    printf("d > Hello %d\n", 42);
    printf("x > Hello %x\n", 42);
    printf("i > Hello %i\n", 42);
    printf("c > Hello %c\n", 'c');
    printf(" > Hello %%\n");
    return (0);
}