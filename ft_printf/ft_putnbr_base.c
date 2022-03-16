/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:44:35 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/08 19:19:17 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long n, char *base, unsigned long baselen)
{
	if (n >= baselen)
		ft_putnbr_base(n / baselen, base, baselen);
	write(1, &base[n % baselen], 1);
}
