/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:37:08 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 12:39:56 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction strrchr() renvoie un pointeur sur la derniere
** occurrence du caractere c dans la chaine s.
**
** RETOUR : un pointeur sur le caractere correspondant, NULL si non trouve.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s + ft_strlen(s);
	while (*str != c)
	{
		if (str == s)
			return (NULL);
		str--;
	}
	return (str);
}
