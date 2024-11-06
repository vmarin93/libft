/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:55:30 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 12:20:18 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Converts an uppercase letter to its lowercase equivalent.
 *
 * @param c The character to be converted.
 * @return The lowercase equivalent of the character if it is uppercase,
 * otherwise returns the character unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
