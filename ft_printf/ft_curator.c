/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_curator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:33:38 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/13 19:42:43 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_twentyfive(char c, unsigned int i)
{
	if (c == 'x')
		ft_putnbr_base(i, "0123456789abcdef", 16);
	else
		ft_putnbr_base(i, "0123456789ABCDEF", 16);
}

int	ft_curator(const char *decisions, int i, va_list ap, int total)
{
	long long	spm;

	if (decisions[i + 1] == 'c')
		total = ft_putchar_fd(va_arg(ap, int), 1, total);
	else if (decisions[i + 1] == 'i' || decisions[i + 1] == 'd')
		total = ft_putnbr_fd(va_arg(ap, int), 1, total);
	else if (decisions[i + 1] == 's')
		total = ft_putstr_fd(va_arg(ap, char *), 1, total);
	else if (decisions[i + 1] == 'u')
		total = ft_uputnbr_fd(va_arg(ap, unsigned int), 1, total);
	else if (decisions[i + 1] == '%')
		total = ft_putchar_fd('%', 1, total);
	else if (decisions[i + 1] == 'x' || decisions[i + 1] == 'X')
	{
		spm = va_arg(ap, unsigned int);
		ft_twentyfive(decisions[i + 1], spm);
		total += ft_intlen(spm, 16);
	}
	else if (decisions[i + 1] == 'p')
	{
		spm = va_arg(ap, size_t);
		total = ft_hexpoint(spm, total);
	}
	return (total);
}
