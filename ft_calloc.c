/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:08:37 by vmarin            #+#    #+#             */
/*   Updated: 2024/04/27 23:04:22 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	if (SIZE_MAX / nmemb >= size)
	{
		ptr = malloc(nmemb * size);
		if (!ptr)
			return (NULL);
		i = 0;
		while (i < nmemb * size)
		{
			((char *)ptr)[i] = 0;
			i++;
		}
		return (ptr);
	}
	return (NULL);
}
