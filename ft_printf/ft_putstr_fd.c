/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:21:22 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/08 17:46:18 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd, int total)
{
	unsigned int	i;

	i = 0;
	if (!s)
	{
		total = ft_putstr_fd("(null)", fd, total);
		return (total);
	}
	while (i < ft_strlen(s))
	{
		total = ft_putchar_fd(s[i], fd, total);
		i++;
	}
	return (total);
}
