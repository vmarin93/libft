/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:33:06 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 12:14:56 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Locates the last occurrence of 'c' (converted to a char) in the string 's'.
 * The null character is considered part of the string.
 *
 * @param s The string to be searched.
 * @param c The character to locate.
 * @return A pointer to the last occurrence of 'c' in 's',
 * or NULL if 'c' is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	to_find;

	to_find = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == to_find)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
