#include <unistd.h>

void    do_putnbr(int n, int fd)
{
    char    digit;

    if (n == 0)
        write(fd, "0", sizeof(char));
    else if (n / 10 != 0)
    {
        do_putnbr(n / 10, fd);
        do_putnbr(n % 10, fd);
    }
    else
    {
        digit = -n + '0';
        write(fd, &digit, sizeof(char));
    }
}

void    ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
    {
        write(fd, "-", sizeof(char));
    }
    if (n > 0)
    {
        n *= -1;
    }
    do_putnbr(n, fd);
}
