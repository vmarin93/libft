/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:01:36 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 11:52:48 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <wchar.h>
#include "libft.h"

/*
 * Locates the first occurrence of 'c' (converted to a char) in the string 's'.
 *
 * @param s The string to search.
 * @param c The character to locate.
 * @return A pointer to the first occurrence of 'c' in 's',
 * or NULL if 'c' is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	to_find;

	to_find = (char)c;
	len = ft_strlen(s);
	i = 0;
	while (i < len + 1)
	{
		if (s[i] == to_find)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
