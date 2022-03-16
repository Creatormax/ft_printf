/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:31:11 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/08 19:19:51 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen(unsigned long n, unsigned long baselen)
{
	int	i;

	i = 1;
	while (n >= baselen)
	{
		n /= baselen;
		i++;
	}
	return (i);
}
