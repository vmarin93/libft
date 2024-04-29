#include <stddef.h>
#include "libft.h"

int get_int_len(int n)
{
    int     len;

    len = 0;

    if (n < 0)
        len++;
    if (n > 0)
        n *= -1;
    if (n == 0)
        len++;
    while (n /= 10 != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int n)
{
    char    *str;
    int     i;

    str = ft_calloc(get_int_len(n) + 1, sizeof(char));
    if (str == NULL)
        return (NULL);
    if (n < 0)
    {
        str[0] = '-';
    }
    if (n == 0)
        str[0] = '0'; 
    i = get_int_len(n) - 1;
    if (n > 0)
    {
        n *= -1;
    }
    while (n /= 10 != 0)
    {
        str[i] = -(n % 10) + '0';
        i--;
        n /= 10;
    }
    return(str);
}
