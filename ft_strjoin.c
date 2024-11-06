/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:52:50 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 12:02:33 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
 * Concatenates two strings 's1' and 's2' into a new string.
 * Allocates sufficient memory for the new string and returns it.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return A pointer to the newly allocated string, or NULL if allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
    char	*result;
    int		i;
    int		j;

    if (!s1)
        return ((char *)s2);
    if (!s2)
        return ((char *)s1);
    result = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
    if (result == NULL)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        result[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        result[i] = s2[j];
        i++;
        j++;
    }
    return (result);
}
