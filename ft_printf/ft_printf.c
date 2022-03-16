/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:33:39 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/17 18:03:19 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *c, ...)
{
	va_list	ap;
	int		i;
	int		total;

	total = 0;
	i = 0;
	if (c == NULL)
		return (0);
	va_start(ap, c);
	while (c[i] != '\0')
	{
		if (c[i] == '%')
		{
			if (c[i + 1] == ' ' || c[i + 1] == 0)
				return (0);
			total = ft_curator(c, i, ap, total);
			i += 2;
		}
		else
		{
			total = ft_putchar_fd(c[i], 1, total);
			i++;
		}
	}
	va_end(ap);
	return (total);
}
