/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:24:40 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/13 18:45:37 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexpoint(unsigned long arg, int total)
{
	total = ft_putstr_fd("0x", 1, total);
	ft_putnbr_base(arg, "0123456789abcdef", 16);
	total += ft_intlen(arg, 16);
	return (total);
}
