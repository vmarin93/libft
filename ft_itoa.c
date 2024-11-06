/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:08:05 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 10:55:24 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
 * Converts an integer to a null-terminated string.
 * 
 * @param n The integer to be converted.
 * 
 * @return A pointer to the null-terminated string representing the integer.
 */
char	*ft_itoa(int n);

/*
 * Helper function to calculate the length of the string needed to represent the integer.
 * 
 * @param n The integer whose length is to be calculated.
 * 
 * @return The length of the string representation of the integer.
 */
static int	get_int_len(int n);

char	*ft_itoa(int n)
{
    char	*str;
    int		i;

    str = ft_calloc(get_int_len(n) + 1, sizeof(char));
    if (str == NULL)
        return (NULL);
    if (n < 0)
    {
        str[0] = '-';
    }
    if (n == 0)
        str[0] = '0';
    i = get_int_len(n) - 1;
    if (n > 0)
    {
        n *= -1;
    }
    while (n != 0)
    {
        str[i] = -(n % 10) + '0';
        i--;
        n /= 10;
    }
    return (str);
}

static int	get_int_len(int n)
{
    int	len;

    len = 0;
    if (n < 0)
        len++;
    if (n > 0)
        n *= -1;
    if (n == 0)
        len++;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}
