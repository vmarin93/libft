/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:58:33 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 11:40:38 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Outputs the hexadecimal representation of the unsigned integer 'n' to the given file descriptor.
 *
 * @param n The unsigned integer to output.
 * @param fd The file descriptor on which to write.
 * @param uppercase If non-zero, use uppercase letters for the hexadecimal digits.
 * @return The number of characters printed.
 */
int	ft_puthexnbr_fd(unsigned int n, int fd, int uppercase);

/*
 * Helper function to output the hexadecimal representation of the unsigned integer 'n'.
 *
 * @param n The unsigned integer to output.
 * @param fd The file descriptor on which to write.
 * @param hex_digits The hexadecimal digits to use for output.
 * @param c_printed The count of characters printed.
 * @return 0 on success.
 */
static int	do_puthexnbr(unsigned int n, int fd, char *hex_digits, int *c_printed);

int	ft_puthexnbr_fd(unsigned int n, int fd, int uppercase)
{
    int		c_printed;
    char	*lower_hex_digits;
    char	*upper_hex_digits;

    lower_hex_digits = "0123456789abcdef";
    upper_hex_digits = "0123456789ABCDEF";
    c_printed = 0;
    if (n == 0)
    {
        write(fd, "0", sizeof(char));
        return (1);
    }
    if (uppercase)
        c_printed += do_puthexnbr(n, fd, upper_hex_digits, &c_printed);
    else
        c_printed += do_puthexnbr(n, fd, lower_hex_digits, &c_printed);
    return (c_printed);
}

static int	do_puthexnbr(unsigned int n, int fd, char *hex_digits, int *c_printed)
{
    char	digit;

    if (n / 16 != 0)
        do_puthexnbr(n / 16, fd, hex_digits, c_printed);
    digit = hex_digits[n % 16];
    write(fd, &digit, sizeof(char));
    (*c_printed) += 1;
    return (0);
}
