/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:20:10 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 16:45:20 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;
	size_t	j;

	ns = ft_strnew(len);
	if (!s || !ns)
		return (NULL);
	i = 0;
	j = 0;
	while (start--)
		i++;
	while (j < len)
	{
		ns[j] = s[i];
		i++;
		j++;
	}
	ns[j] = '\0';
	return (ns);
}
