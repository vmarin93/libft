/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*   Created: 2024/04/08 12:53:21 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 10:45:39 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Checks if the given character is an alphabetic letter.
 * 
 * @param c The character to be checked.
 * 
 * @return 1024 if the character is an alphabetic letter, 0 otherwise.
 */
int	ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1024);
    return (0);
}
