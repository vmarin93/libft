/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:16:38 by vmarin            #+#    #+#             */
/*   Updated: 2024/04/23 22:03:17 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

//size_t	ft_strlen(const char *str)
//{
//	size_t	i;
//
//	i = 0;
//	while (str[i] != '\0')
//		i++;
//	return (i);
//}
//
//char	*ft_strdup(const char *s)
//{
//	char	*duplicate;
//	size_t	i;
//
//	if (s == NULL)
//		return (NULL);
//	duplicate = malloc(sizeof(s));
//	if (duplicate == NULL)
//		return (NULL);
//	i = 0;
//	while (i < sizeof(s))
//	{
//		duplicate[i] = s[i];
//		i++;
//	}
//	return (duplicate);
//}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t		i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	if (start + len > ft_strlen(s))
		len = ft_strlen(&s[start]);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
