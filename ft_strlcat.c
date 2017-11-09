/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:19:50 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/09 12:28:28 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		mem;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	mem = i;
	i = 0;
	while (src[i] != '\0' && size != 1)
	{
		dst[j] = src[i];
		j++;
		i++;
		size--;
	}
	dst[j] = '\0';
	return (mem);
}
