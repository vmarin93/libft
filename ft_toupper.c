/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:46:44 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 12:21:05 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Converts a lowercase letter to its uppercase equivalent.
 *
 * @param c The character to be converted.
 * @return The uppercase equivalent of the character if it is lowercase,
 * otherwise returns the character unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
