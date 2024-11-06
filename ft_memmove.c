/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*   Created: 2024/04/17 14:28:41 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 11:35:39 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Copies 'n' bytes from memory area 'src' to memory area 'dest'.
 * The memory areas may overlap.
 *
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to 'dest'.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
    size_t	i;

    if (dest == NULL && src == NULL)
        return (dest);
    if (dest < src)
    {
        i = 0;
        while (i < n)
        {
            ((char *)dest)[i] = ((char *)src)[i];
            i++;
        }
    }
    else
    {
        i = n;
        while (i > 0)
        {
            ((char *)dest)[i - 1] = ((char *)src)[i - 1];
            i--;
        }
    }
    return (dest);
}
