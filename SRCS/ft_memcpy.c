/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:40:47 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/07 17:49:34 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction memcpy() copie n octets depuis la zone mémoire
** src vers la zone mémoire dst. Les deux zones ne doivent pas se chevaucher.
** Si c'est le cas, utilisez plutôt memmove(3).
**
** VALEUR RENVOYEE : La fonction memcpy() renvoie un pointeur sur dest.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*s1;

	s1 = (char *)dst;
	i = 0;
	while (i < n)
	{
		*(char *)s1 = *(char *)src;
		s1++;
		src++;
		i++;
	}
	return (dst);
}
