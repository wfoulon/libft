/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:08:20 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/07 16:19:02 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : strncpy est identique a strcpy, sauf que seuls les n premiers
** octets de src sont copies. s'il n'y a pas d'octet nul dans les n premiers 
** octets de src, la chaine resultante dans dst ne disposera pas d'octet nul
** final. Dans le cas ou la longueur de src est inferieur a n, a la fin de dst
** sera remplie avec des octets nuls.
**
**VALEUR RENVOYEE : un ponteur sur la chaine dest.
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t a;

	a = 0;
	if (!dst && !src)
		return (NULL);
	ft_bzero(dst, len);
	while (src[a] && a < len)
	{
		dst[a] = src[a];
		a++;
	}
	return (dst);
}
