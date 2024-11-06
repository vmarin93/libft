/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*   Created: 2024/04/17 15:46:38 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 12:05:04 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
 * Copies up to 'size - 1' characters from the string 'src' to 'dst',
 * null-terminating the result if 'size' is not 0.
 *
 * @param dst The destination buffer where the string is copied.
 * @param src The source string to copy from.
 * @param size The size of the destination buffer.
 * @return The total length of the string 'src'.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t	i;
    size_t	src_len;

    src_len = ft_strlen(src);
    if (src_len + 1 < size)
    {
        i = 0;
        while (i < src_len + 1)
        {
            dst[i] = src[i];
            i++;
        }
    }
    else if (size != 0)
    {
        i = 0;
        while (i < size - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (src_len);
}
