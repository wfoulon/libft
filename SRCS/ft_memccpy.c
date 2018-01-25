/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:34:22 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 11:26:30 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction memccpy() copie au plus n octets de la zone
** mémoire src vers la zone mémoire dest, s'arrêtant dès qu'elle rencontre
** le caractère c.
**
** VALEUR RENVOYEE : La fonction memccpy() renvoie un pointeur sur le caractère
** immédiatement après c dans la zone dest, ou NULL si c n'a pas été trouvé
** dans les n premiers caractères de src.
*/


void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		if (*(unsigned char *)src == (unsigned char)c)
		{
			dst++;
			return (dst);
		}
		dst++;
		src++;
		i++;
	}
	return (NULL);
}
