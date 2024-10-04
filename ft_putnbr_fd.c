#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    long int    num;

    num = n;
    if (num < 0)
    {
        ft_putchar_fd('-', fd);
        num *= -num;
    }
    if (num >= 0 || num <= 9)
    {
        ft_putchar_fd(num + '0', fd);
    }
    if (num > 9)
    {
        ft_putnbr_fd(num / 10, fd);
        ft_putnbr_fd(num % 10, fd);
    }
    
}