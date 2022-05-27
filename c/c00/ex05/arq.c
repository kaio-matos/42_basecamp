#include <unistd.h>

void    ft_putchar(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (a == 55 && b == 56 && c == 57)
    {
        write(1, "", 1);
    }
    else
    {
        write(1, ", ", 2);
    }
}

void    ft_print_comb(void)
{
    int    a;
    int    b;
    int    c;

    a = 48;
    while (a <= 55)
    {
        b = 49;
        while (b <= 56)
        {
            c = 50;
            while (c <= 57)
            {
                ft_putchar(a, b, c);
            c++;
            }
        b++;
        }
    a++;
    }
}