/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:46:38 by vmarin            #+#    #+#             */
/*   Updated: 2024/04/23 20:38:29 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0')
		{
			if (i == size)
			{
				i--;
				break ;
			}
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
