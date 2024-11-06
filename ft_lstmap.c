/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:52:37 by vmarin            #+#    #+#             */
/*   Updated: 2024/05/02 20:02:17 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
 * Iterates the list 'lst' and applies the function 'f' to the content of each node.
 * Creates a new list resulting from the successive applications of 'f'.
 * The 'del' function is used to delete the content of a node if needed.
 *
 * @param lst The address of a pointer to a node.
 * @param f The function to apply to each node's content.
 * @param del The function used to delete the content of a node if needed.
 * @return The new list, or NULL if an allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*new_list;
    t_list	*diff_node;

    if (!lst || !f || !del)
        return (NULL);
    new_list = NULL;
    while (lst != NULL)
    {
        diff_node = ft_lstnew(f(lst->content));
        if (!diff_node)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, diff_node);
        lst = lst->next;
    }
    return (new_list);
}
