/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:42:13 by vmarin            #+#    #+#             */
/*   Updated: 2024/04/27 23:13:09 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	size_t	i;

	if (s == NULL)
		return (NULL);
	duplicate = malloc(ft_strlen(s) + 1);
	if (duplicate == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		duplicate[i] = s[i];
		i++;
	}
	return (duplicate);
}
