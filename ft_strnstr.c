/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:08:34 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 12:13:36 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Locates the first occurrence of the null-terminated string 'little' in the
 * string 'big', where not more than 'len' characters are searched. Characters
 * that appear after a '\0' character are not searched.
 *
 * @param big The string to be searched.
 * @param little The substring to search for.
 * @param len The maximum number of characters to search.
 * @return A pointer to the first character of the first occurrence of 'little',
 * or NULL if 'little' is not found in 'big'.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] != '\0')
		{
			if (little[j] != big[i + j] || i + j >= len)
				break ;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
