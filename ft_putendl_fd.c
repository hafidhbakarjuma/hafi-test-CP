#include "libft.c"

void	ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (!s || !fd)
        return ;
    while (s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
    ft_putchar_fd('\n', fd);
}