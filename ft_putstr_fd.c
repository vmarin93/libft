/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:16:02 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 11:45:27 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

/*
 * Outputs the string 's' to the given file descriptor.
 *
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd)
{
    size_t	i;

    if (!s)
        return ;
    i = 0;
    while (s[i] != '\0')
    {
        write(fd, s + i, sizeof(char));
        i++;
    }
}
