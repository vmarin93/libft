/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@42london.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:21:02 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 10:49:53 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Checks if the given character is a whitespace character.
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is a whitespace character, 0 otherwise.
 */
int	ft_isspace(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0);
}
