#include <stddef.h>

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t  i;

    if (!s)
        return ;
    i = 0;
    while (s[i] != '\0')
    {
        f(i, s + i);
        i++;
    }
}
