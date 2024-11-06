/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarin <vmarin@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:08:37 by vmarin            #+#    #+#             */
/*   Updated: 2024/11/06 10:42:00 by vmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

/*
 * Allocates memory for an array and initializes all bytes to zero.
 * 
 * @param nmemb Number of elements to allocate.
 * @param size Size of each element.
 * 
 * @return Pointer to the allocated memory, or NULL if the allocation fails.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
    void	*ptr;
    size_t	i;

    if (SIZE_MAX / nmemb >= size) // Check for overflow
    {
        ptr = malloc(nmemb * size); // Allocate memory
        if (!ptr)
            return (NULL);
        i = 0;
        while (i < nmemb * size) // Initialize memory to zero
        {
            ((char *)ptr)[i] = 0;
            i++;
        }
        return (ptr);
    }
    return (NULL); // Return NULL if overflow
}
