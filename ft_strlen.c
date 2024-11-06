/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:04:00 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 12:09:20 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * Computes the length of the string 's' excluding the terminating null byte ('\0').
 *
 * @param s The string whose length is to be computed.
 * @return The number of characters in the string 's'.
 */
size_t	ft_strlen(const char *s)
{
    size_t	i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
