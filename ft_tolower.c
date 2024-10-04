#include <libft.h>

int     tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
} 

