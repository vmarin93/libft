/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:59:43 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 11:34:30 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Copies 'n' bytes from memory area 'src' to memory area 'dest'.
 * The memory areas must not overlap. Use ft_memmove if the memory areas do overlap.
 *
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to 'dest'.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t		i;

    if (dest == NULL && src == NULL)
        return (dest);
    i = 0;
    while (i < n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return (dest);
}
