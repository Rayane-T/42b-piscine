#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    int counter;

    counter = 0;
    i = 0;
    while (str[i] != '\0')
    {
        counter++;
        i++;
    }
    return (counter);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void    ft_putnbr(int nb)
{
    char *str;

    if (nb == -2147483648)
    {
        ft_putchar('8');
        ft_putnbr(nb / 10);
    }
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else
    {
        if (nb > 9)
        {
            ft_putnbr(nb / 10);
        }
        ft_putchar(nb % 10 + 48);
    }
    
}

int main(void)
{
    char    *str;

    str = "Hello";
    ft_putstr(str);
    return 0;
}