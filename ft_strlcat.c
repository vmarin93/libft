/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:11:09 by vmarin            #+#    #+#             */
/*   Updated: 2024/04/27 20:33:36 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_offset;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		dst_len = size;
	if (dst_len == size)
		return (src_len + dst_len);
	dst_offset = dst_len;
	if (src_len < size - dst_len)
	{
		i = 0;
		while (i <= src_len)
		{
			dst[dst_offset] = src[i];
			i++;
			dst_offset++;
		}
	}
	else
	{
		i = 0;
		while (i < size - dst_len - 1)
		{
			dst[dst_offset] = src[i];
			i++;
			dst_offset++;
		}
		dst[size - 1] = '\0';
	}
	return (src_len + dst_len);
}
