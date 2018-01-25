/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:40:39 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/10 11:47:12 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Recherche une sous-chaine. La fonction strstr() cherche la
** 1ere occurrence de la sous-chaine s2 dans la chaine s1. la recherche se fait
** uniquement sur les n 1ers caracteres de s1.
**
** RETOUR : s1 si s2 est vide, NULL si s2 n'est pas trouve dans s1, sinon un
** pointeur sur le 1er caractere de la 1ere occurrence de s2.
*/

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*tmp;
	char	*mem;
	size_t	size;

	mem = (char *)(s1 + len);
	size = ft_strlen(s2);
	tmp = (char *)s1;
	if (!size)
		return ((char *)s1);
	while ((tmp = ft_strchr(tmp, *s2)) && tmp <= mem)
	{
		if ((tmp + size <= mem) && !ft_strncmp(tmp, s2, size))
			return (tmp);
		tmp++;
	}
	return (NULL);
}
