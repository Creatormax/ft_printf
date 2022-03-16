/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:28:32 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/13 19:50:36 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *c, ...);//__attribute__((format(printf, 1, 2)));
int		ft_curator(const char *decisions, int i, va_list ap, int total);
int		ft_putchar_fd(char c, int fd, int total);
void	ft_putnbr_base(unsigned long n, char *base, unsigned long baselen);
int		ft_putnbr_fd(int n, int fd, int total);
int		ft_putstr_fd(char *s, int fd, int total);
size_t	ft_strlen(const char *str);
int		ft_uputnbr_fd(unsigned int n, int fd, int total);
int		ft_intlen(unsigned long n, unsigned long baselen);
int		ft_hexpoint(unsigned long arg, int total);

#endif