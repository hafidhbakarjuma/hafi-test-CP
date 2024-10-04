#include <libft.h>

int     toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}     