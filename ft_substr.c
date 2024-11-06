/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*   Created: 2024/04/19 19:16:38 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 12:19:25 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
 * Allocates and returns a substring from the string 's'.
 * The substring begins at index 'start' and is of maximum size 'len'.
 *
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string 's'.
 * @param len The maximum length of the substring.
 * @return The substring, or NULL if allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char		*substr;
    size_t		i;

    if (s == NULL)
        return (NULL);
    if (start > ft_strlen(s))
    {
        return (ft_strdup(""));
    }
    if (start + len > ft_strlen(s))
        len = ft_strlen(s + start);
    substr = ft_calloc(len + 1, sizeof(char));
    if (substr == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    return (substr);
}
