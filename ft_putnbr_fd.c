/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:33:42 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 11:44:12 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Outputs the integer 'n' to the given file descriptor.
 *
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 * @return The number of characters printed.
 */
int	ft_putnbr_fd(int n, int fd);

/*
 * Helper function to recursively output the digits of the integer 'n'.
 *
 * @param n The integer whose digits are to be output.
 * @param fd The file descriptor on which to write.
 * @param chars_printed The count of characters printed.
 * @return 0 on success.
 */
static int	do_putnbr(int n, int fd, int *chars_printed);

int	ft_putnbr_fd(int n, int fd)
{
    int	chars_printed;

    chars_printed = 0;
    if (n < 0)
        chars_printed += write(fd, "-", sizeof(char));
    if (n > 0)
        n *= -1;
    chars_printed += do_putnbr(n, fd, &chars_printed);
    return (chars_printed);
}

static int	do_putnbr(int n, int fd, int *chars_printed)
{
    char	digit;

    if (n / 10 != 0)
    {
        do_putnbr(n / 10, fd, chars_printed);
        do_putnbr(n % 10, fd, chars_printed);
    }
    else
    {
        digit = -n + '0';
        write(fd, &digit, sizeof(char));
        (*chars_printed) += 1;
    }
    return (0);
}
