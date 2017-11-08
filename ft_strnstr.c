/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:40:39 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 13:15:14 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*tmp;
	char	*mem;
	size_t	size;

	mem = (char *)(big + n);
	size = ft_strlen(little);
	tmp = (char *)big;
	if (!size)
		return ((char *)big);
	while ((tmp = ft_strchr(tmp, *little)) && tmp <= mem)
	{
		if ((tmp + size <= mem) && !ft_strncmp(tmp, little, size))
			return (tmp);
		tmp++;
	}
	return (NULL);
}
