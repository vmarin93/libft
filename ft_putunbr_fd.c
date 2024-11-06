/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:53:46 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 11:49:09 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Outputs the unsigned integer 'n' to the given file descriptor.
 *
 * @param n The unsigned integer to output.
 * @param fd The file descriptor on which to write.
 * @return The number of characters printed.
 */
int			ft_putunbr_fd(unsigned int n, int fd);

/*
 * Helper function to recursively output the digits of the unsigned integer 'n'.
 *
 * @param n The unsigned integer whose digits are to be output.
 * @param fd The file descriptor on which to write.
 * @param chars_printed The count of characters printed.
 * @return 0 on success.
 */
static int	do_putunbr(unsigned int n, int fd, int *chars_printed);

int	ft_putunbr_fd(unsigned int n, int fd)
{
	int	chars_printed;

	chars_printed = 0;
	chars_printed += do_putunbr(n, fd, &chars_printed);
	return (chars_printed);
}

static int	do_putunbr(unsigned int n, int fd, int *chars_printed)
{
	char	digit;

	if (n / 10 != 0)
	{
		do_putunbr(n / 10, fd, chars_printed);
		do_putunbr(n % 10, fd, chars_printed);
	}
	else
	{
		digit = n + '0';
		write(fd, &digit, sizeof(char));
		(*chars_printed) += 1;
	}
	return (0);
}
