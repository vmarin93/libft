/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*   Created: 2024/04/19 18:42:13 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 11:53:13 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
 * Duplicates the string 's' by allocating sufficient memory and copying the string.
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
