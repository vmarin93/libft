/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:33:08 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 10:49:18 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Checks if the given character is printable, including space.
 * 
 * @param c The character to be checked.
 * 
 * @return 16384 if the character is printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
    if (c >= 32 && c < 127)
        return (16384);
    return (0);
}
