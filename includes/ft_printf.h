/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:46:00 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/14 14:26:20 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>

typedef struct s_print
{
	va_list	args;
	int 	wdt;
	int		prc;
	int		zero;
	int		pnt;
	int		dash;
	int		tl;
	int		sign;
	int		is_zero;
	int		perc;
	int		spc;
}	t_print;

int ft_printf(const char *formstr, ...);
int	ft_print_char(char c);
int	ft_print_string((char *)arg);
int	ft_print_addr((void *)arg);
int	ft_print_int((int)arg);
int	ft_print_bint((void *)arg);
int	ft_print_uint((void *)arg);
int	ft_print_hex((void *)arg);
int	ft_print_bhex((void *)arg);

#endif
