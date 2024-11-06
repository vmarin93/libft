/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*   Created: 2024/04/17 17:11:09 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 12:03:32 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
 * Concatenates the string 'src' to the end of 'dst', ensuring to respect the
 * buffer size 'size'. It is designed to be safer, more consistent, and less prone
 * to buffer overflow than the traditional strcat.
 *
 * @param dst The destination buffer to which the string will be appended.
 * @param src The source string which will be appended to 'dst'.
 * @param size The total size of the destination buffer.
 * @return The total length of the string it tried to create (initial length of 'dst' plus length of 'src').
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	src_len;
    size_t	dst_len;

    if ((!dst || !src) && !size)
        return (0);
    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    if (dst_len >= size)
    {
        dst_len = size;
        return (src_len + dst_len);
    }
    if (src_len < size - dst_len)
    {
        ft_memcpy(dst + dst_len, src, src_len + 1);
    }
    else
    {
        ft_memcpy(dst + dst_len, src, size - dst_len - 1);
        dst[size - 1] = '\0';
    }
    return (src_len + dst_len);
}
