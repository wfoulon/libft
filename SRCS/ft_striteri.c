/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:34:09 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 15:45:58 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Applique la fonction f a chaque caractere de la chaine passee
** en parametre en precisant son index en premier argument.
** Chaque caractere est passe par adresse a la fonction f afin de pouvoir etre
** modifie si necessaire.
**
** PARAM #1 : Lachaine de caracteres sur laquelle iterer.
** PARAM #2 : La fonction a appeler sur chaque caractere de s et son index.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
		f(i++, s++);
}
