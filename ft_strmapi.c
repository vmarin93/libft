#include <stddef.h>
#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *result;
    size_t  i;

    if (!s)
        return (NULL);
    result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
    if (result == NULL)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        result[i] = f(i, s[i]);
        i++;
    }
    return (result);
}
