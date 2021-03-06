/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:15:17 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/09 17:17:21 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Renvoie la factorielle du nombre passé en paramètre
** Return the factorial of nb
*/

int		ft_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (i >= 1)
	{
		nb = i * nb;
		i--;
	}
	return (nb);
}
