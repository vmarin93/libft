/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:13:14 by vmarin            #+#    #+#             */
/*   Updated: 2024/04/28 22:44:40 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

int	is_in_set(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start_index;
	size_t	end_index;
	char	*result;

	start_index = 0;
	while (is_in_set(s1[start_index], set))
		start_index++;
	end_index = ft_strlen(s1);
	while (is_in_set(s1[end_index], set))
		end_index--;
	result = malloc((end_index - start_index) * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i <= end_index - start_index)
	{
		result[i] = s1[start_index + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
