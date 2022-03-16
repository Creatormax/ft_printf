/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:35:11 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/08 19:18:51 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uputnbr_fd(unsigned int n, int fd, int total)
{
	if (n >= 10)
	{
		total = ft_uputnbr_fd(n / 10, fd, total);
		total = ft_putchar_fd(n % 10 + '0', fd, total);
	}
	else
	{
		total = ft_putchar_fd(n % 10 + '0', fd, total);
	}
	return (total);
}
