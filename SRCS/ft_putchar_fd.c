/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:34:59 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/09 12:43:46 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Ecrit le caractere c sur le descripteur de fichier fd.
**
** PARAM #1 : Le caractere a ecrire
** PARAM #2 : Le file descriptor
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
