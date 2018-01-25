/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:29:10 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 12:51:46 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction strchr() renvoie un pointeur sur la premiere
** occurrence du caractere c dans la chaine s.
**
** RETOUR : Un pointeur sur le caractere correspondant ou NULL si non trouve.
*/

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;

	i = 0;
	a = (char)c
	while (s[i])
	{
		if (s[i] == a)
			return ((char *)s + i);
		else
			i++;
	}
	if (s[i] == a)
		return ((char *)s + i);
	return (NULL);
}
