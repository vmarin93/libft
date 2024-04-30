#include <unistd.h>
#include <stddef.h>

void    ft_putstr_fd(char *s, int fd)
{
    size_t  i;

    if (!s)
        return ;
    i = 0;
    while (s[i] != '\0')
    {
        write(fd, s + i, sizeof(char));
        i++;
    }
}
