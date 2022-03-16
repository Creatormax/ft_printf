/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:27:32 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/08 16:41:01 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd, int total)
{
	if (n <= 2147483647 || n > -2147483648)
	{
		if (n == -2147483648)
		{
			total = ft_putchar_fd('-', fd, total);
			total = ft_putchar_fd('2', fd, total);
			total = ft_putnbr_fd(147483648, fd, total);
		}
		else if (n < 0)
		{
			n = -n;
			total = ft_putchar_fd('-', fd, total);
			total = ft_putnbr_fd(n, fd, total);
		}
		else if (n >= 10)
		{
			total = ft_putnbr_fd(n / 10, fd, total);
			total = ft_putchar_fd(n % 10 + '0', fd, total);
		}
		else
		{
			total = ft_putchar_fd(n % 10 + '0', fd, total);
		}
	}
	return (total);
}
