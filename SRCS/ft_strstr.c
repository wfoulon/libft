/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:32:11 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/09 16:55:17 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction strstr() cherche la 1ere occurrence de aiguille
** dans meule_de_foin. Les '\0' de fin de chaine ne sont pas compares.
**
** RETOUR : meule_de_foin si aiguille est vide, NULL si aiguille n'est pas dans
** meule_de_foin, un pointeur sur le 1er caractere de la 1ere occurrence de
** aiguille.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[j] != '\0')
	{
		i = 0;
		while (needle[i] == haystack[j + i])
		{
			i++;
			if (needle[i] == '\0')
				return ((char*)haystack + j);
		}
		j++;
	}
	return (NULL);
}
