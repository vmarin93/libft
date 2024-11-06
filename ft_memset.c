/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@42london.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:24:47 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 13:08:17 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Fills the first 'n' bytes of the memory area pointed to by 's'
 * with the constant byte 'c'.
 *
 * @param s The memory area to be filled.
 * @param c The byte value to fill the memory with.
 * @param n The number of bytes to be set to the value.
 * @return A pointer to the memory area 's'.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
