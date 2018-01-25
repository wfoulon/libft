/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:25:32 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/07 15:14:53 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction memset() remplit les n premiers octets de la zone
** mémoire pointée par b avec l'octet c.
**
** VALEUR RENVOYEE : La fonction memset() renvoie un pointeur sur la zone
** mémoire b.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	char *str;

	str = b;
	while (len--)
	{
		*str = (unsigned char)c;
		str++;
	}
	return (b);
}
