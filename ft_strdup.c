/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@42london.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:42:13 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 13:23:47 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Duplicates the string 's' creating a new string that is a copy of 's'
 *
 * @param s The string to duplicate.
 * @return A pointer to the newly allocated string, or NULL if allocation fails.
 */
char	*ft_strdup(const char *s)
{
	char	*duplicate;
	size_t	i;

	duplicate = ft_calloc(ft_strlen(s) + 1, sizeof(char));
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
