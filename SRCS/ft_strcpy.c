/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:04:36 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/09 12:19:15 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : la fonction copie la chaine pointée par src (y compris l'octet 
** nul "\0" final) dans la chaine pointee par dest. les deux chaines ne doivent 
** pas se chevaucher. la chaine dest doit etre assez grande pour acceuillir la
** copie.
**
** VALEUR RENVOYEE : un pointeur sur la chaine destination dest.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
