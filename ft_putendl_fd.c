#include <unistd.h>
#include <stddef.h>

void    ft_putendl_fd(char *s, int fd)
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
    write(fd, "\n", sizeof(char));
}
