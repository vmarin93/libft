/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@42london.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:17:38 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 13:20:11 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Compares up to 'n' characters of the string 's1' to those of the string 's2'.
 * The comparison is done using unsigned characters.
 *
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to,
 * or greater than zero if 's1' is found,
 * respectively, to be less than, to match, or be greater than 's2'.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - s2[i]);
	return (0);
}
