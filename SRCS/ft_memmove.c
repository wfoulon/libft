/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:27:11 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 11:46:16 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction memmove() copie n octets depuis la zone mémoire
** src vers la zone mémoire dest. Les deux zones peuvent se chevaucher :
** la copie se passe comme si les octets de src étaient d'abord copiés dans
** une zone temporaire qui ne chevauche ni src ni dest, et les octets sont
** ensuite copiés de la zone temporaire vers dest.
**
** VALEUR RENVOYEE : La fonction memmove() renvoie un pointeur sur dest.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char*)dst;
	s = (const char *)src;
	i = -1;
	if (d < s)
	{
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (dst);
}
