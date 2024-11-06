/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putulhexnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:55:24 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 11:47:48 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Outputs the hexadecimal representation of the
 * unsigned long integer 'n' to the given file descriptor.
 *
 * @param n The unsigned long integer to output.
 * @param fd The file descriptor on which to write.
 * @param uppercase If non-zero use uppercase letters for the hex digits.
 * @return The number of characters printed.
 */
int	ft_putulhexnbr_fd(unsigned long int n, int fd, int uppercase);

/*
 * Helper function to recursively output the hexadecimal representation
 * of the unsigned long integer 'n'.
 *
 * @param n The unsigned long integer to output.
 * @param fd The file descriptor on which to write.
 * @param digits The hexadecimal digits to use for output.
 * @param c_printed The count of characters printed.
 * @return 0 on success.
 */
int	do_putulhexnbr(unsigned long int n, int fd, char *digits, int *c_printed);

int	ft_putulhexnbr_fd(unsigned long int n, int fd, int uppercase)
{
	int		c_printed;
	char	*lower_hex_digits;
	char	*upper_hex_digits;

	lower_hex_digits = "0123456789abcdef";
	upper_hex_digits = "0123456789ABCDEF";
	c_printed = 0;
	if (uppercase)
		c_printed += do_putulhexnbr(n, fd, upper_hex_digits, &c_printed);
	else
		c_printed += do_putulhexnbr(n, fd, lower_hex_digits, &c_printed);
	return (c_printed);
}

int	do_putulhexnbr(unsigned long int n, int fd, char *digits, int *c_printed)
{
	char	digit;

	if (n == 0)
	{
		write(fd, "0", sizeof(char));
		(*c_printed) += 1;
		return (0);
	}
	else if (n / 16 != 0)
		do_putulhexnbr(n / 16, fd, digits, c_printed);
	digit = digits[n % 16];
	write(fd, &digit, sizeof(char));
	(*c_printed) += 1;
	return (0);
}
