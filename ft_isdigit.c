/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:43 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 10:48:36 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Checks if the given character is a digit (0-9).
 * 
 * @param c The character to be checked.
 * 
 * @return 2048 if the character is a digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (2048);
    return (0);
}
