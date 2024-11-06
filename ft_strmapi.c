/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:09:06 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 12:10:24 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
 * Applies the function 'f' to each character of the string 's' to create a new string
 * resulting from successive applications of 'f'.
 *
 * @param s The input string.
 * @param f The function to apply to each character.
 * @return A new string resulting from the application of 'f', or NULL if allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char	*result;
    size_t	i;

    if (!s)
        return (NULL);
    result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
    if (result == NULL)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        result[i] = f(i, s[i]);
        i++;
    }
    return (result);
}
