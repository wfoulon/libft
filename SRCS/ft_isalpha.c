/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:57:31 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/07 16:04:04 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Renvoie 1 si c est alphabétique, 0 sinon
** Return 1 if c is alpha, 0 if not
*/

int		ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
