#include <stddef.h>
#include "libft.h"

int get_matrix_size(char const *s, char c)
{
    int matrix_size;
    int flag;
    int i;

    matrix_size = 0;
    flag = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            flag = 0;
        if (s[i] != c && flag == 0)
        {
            flag = 1;
            matrix_size++;
        }
        i++;
    }
    return (matrix_size);
}

char    **ft_split(char const *s, char c)
{
    char    **matrix;
    int  offset;
    size_t  i;
    size_t  j;

    if (!s)
        return (NULL);
    matrix = ft_calloc(get_matrix_size(s, c) + 1, sizeof(char *));
    if (matrix == NULL)
        return (NULL);
    offset = -1;
    i = 0;
    j = 0;
    while (i <= ft_strlen(s))
    {
        if (s[i] != c && offset < 0)
            offset = i;
        else if ((s[i] == c || i == ft_strlen(s)) && offset >= 0)
        {
            matrix[j] = ft_substr(s, offset, i - offset);
            offset = -1;
            j++;
        }
        i++;
    }
    return (matrix);
}
