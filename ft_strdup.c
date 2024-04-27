/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:42:13 by vmarin            #+#    #+#             */
/*   Updated: 2024/04/23 20:38:07 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	size_t	i;

	if (s == NULL)
		return (NULL);
	duplicate = malloc(sizeof(s));
	if (duplicate == NULL)
		return (NULL);
	i = 0;
	while (i < sizeof(s))
	{
		duplicate[i] = s[i];
		i++;
	}
	return (duplicate);
}
