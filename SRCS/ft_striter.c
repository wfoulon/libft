/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:29:35 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 15:33:34 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Applique la fonction f a chaque caractere de la chaine passee
** en parametre. Chaque caractere est passe par adresse a la fonction f afin
** de pouvoir etre modifie si necessaire.
**
** PARAM #1 : La chaine de caractere sur laquelle iterer.
** PARAM #2 : La fonction a appeler sur chaque caractere de s
*/

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;
	int	p;

	if (s != NULL && f != NULL)
	{
		i = 0;
		p = ft_strlen(s);
		while (i < p)
		{
			(*f)(s);
			s++;
			i++;
		}
	}
}
