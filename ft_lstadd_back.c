/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:29:43 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 10:59:43 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Adds the new node at the end of the list.
 * 
 * @param lst A pointer to the first node of the list.
 * @param new_node The node to be added to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
    t_list	*last_node;

    if (!*lst)
        *lst = new_node;
    else
    {
        last_node = ft_lstlast(*lst);
        last_node->next = new_node;
    }
}
