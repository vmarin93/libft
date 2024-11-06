/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:01:05 by vmarin            #+#    #+#             */
/*   Updated: 2024/05/02 18:52:25 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Iterates the list 'lst' and applies the function 'f' to the content of each node.
 *
 * @param lst The address of a pointer to a node.
 * @param f The function to apply to each node's content.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list	*current;

    if (!lst || !f)
        return ;
    current = lst;
    while (current != NULL)
    {
        f(current->content);
        current = current->next;
    }
}
