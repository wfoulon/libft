/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:05:38 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/14 11:48:40 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Renvoie 1 si c est un espace, tabulations, retour a ligne, 0 sinon
** return 1 if c is a space, a tabulation, 0 if not
*/

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\n')
		return (1);
	if (c == '\t' || c == '\r')
		return (1);
	if (c == '\v' || c == '\f')
		return (1);
	return (0);
}
