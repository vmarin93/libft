/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:22:24 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 10:35:25 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Erases the first n bytes of memory starting at s by setting them to zero.
 */
void	ft_bzero(void *s, size_t n)
{
    size_t	i;

    i = 0;
    while (i < n) // Iterate through the first n bytes
    {
        ((char *)s)[i] = '\0'; // Set each byte to zero
        i++;
    }
}
