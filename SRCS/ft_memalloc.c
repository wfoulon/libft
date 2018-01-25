/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:13:39 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 14:26:15 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Alloue (avec malloc(3)) et retourne une zone de mémoire
** “fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation échoue,
** la fonction renvoie NULL.
**
** PARAM #1 : La taille de la zone de mémoire à allouer.
**
** RETOUR : La zone de mémoire allouée.
*/

void	*ft_memalloc(size_t size)
{
	char	*mem;

	mem = (char *)malloc(sizeof(char) * size);
	if (mem == NULL || size == 0)
		return (NULL);
	ft_memset(mem, 0, size);
	return ((void *)mem);
}
