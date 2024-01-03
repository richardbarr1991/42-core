#include <stdio.h>
#include <unistd.h>

void    print_hex(void *ptr)
{
    const int    zero = '0';
    const int  eks = 'x';
    char    hex_string[16];
    const char  *hex_chars = "0123456789abcdef";
    unsigned long long ull_ptr = (unsigned long long)ptr;
    int     i;

    i = 16;
    printf("i is: %d\n", i);
    while (i > 0)
    {
        hex_string[i] = hex_chars[ull_ptr % 16];
        ull_ptr /= 16;
        i--;
    }
    write(1, &zero, 1);
    write(1, &eks, 1);
    write(1, hex_string, sizeof(hex_string));
}

int main(void) {
    int i;
    int *ptr;

    i = 43;
    ptr = &i;
    printf("the address stored by ptr is: %p\n", ptr);
    print_hex(ptr);
    return (0);
}
