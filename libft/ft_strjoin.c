/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:46:41 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/08 16:56:39 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ns;
	unsigned int	i;
	unsigned int	j;

	ns = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!s1 || !s2 || !ns)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ns[i + j] = s2[j];
		j++;
	}
	ns[i + j] = '\0';
	return (ns);
}
