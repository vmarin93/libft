/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:33:42 by vmarin            #+#    #+#             */
/*   Updated: 2024/05/01 18:30:37 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	do_putnbr(int n, int fd)
{
	char	digit;

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

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		write(fd, "-", sizeof(char));
	if (n > 0)
		n *= -1;
	do_putnbr(n, fd);
}
