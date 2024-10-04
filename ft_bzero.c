#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
    
    char    *dest;
    size_t = i;

    i = 0;
    dest = s;
    while (i < n)
    {
        dest[i] = 0;
        i++;
    } 
}
/*
#include <stdio.h>
int main()
{
    char str[] = "Hello, World!";
    
    // Call ft_bzero to zero out the first 6 bytes of the string
    ft_bzero(str, 6);
    
    // Print the result
    printf("Result after ft_bzero: %s\n", str);  // Output should be an empty string followed by ", World!"
    
    return 0;
}*/