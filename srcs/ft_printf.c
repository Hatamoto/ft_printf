/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:30:18 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/15 08:59:02 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include "ft_printf.h"
// Remove later:
#include <stdio.h>

int	eval_format(const char *inputstr, va_list args)
{
	int	ret;

	ret = 0;
	if (*inputstr == 'c')
		ret += ft_print_char(va_arg(args, int));
	if (*inputstr == 's')
		ret += ft_print_string(va_arg(args, char *));
	//if (*inputstr == 'p')
	//	ret += ft_print_addr((void *)arg);
	if (*inputstr == 'd')
		ret += ft_print_int(va_arg(args, int));
	//if (*inputstr == 'i')
	//	ret += ft_print_bint((void *)arg);
	//if (*inputstr == 'u')
	//	ret += ft_print_uint((void *)arg);
	if (*inputstr == 'x' || *inputstr == 'X')
		ret += ft_print_hex(va_arg(args, int), *inputstr);
	//if (*inputstr == 'X')
	//	ret += ft_print_bhex((void *)arg);
	return (ret);
}

int ft_printf(const char *inputstr, ...)
{
	unsigned int	i;
	va_list			args;

	i = 0;
	va_start(args, inputstr);
	while (*inputstr != '\0')
	{
		if (*inputstr == '%')
		{
			inputstr++;
			if (ft_strchr("cspdiuxX", *inputstr))
				i += eval_format(inputstr, args);
			else if (*inputstr == '%')
				i += ft_print_char('%'); 
		}
		else
			i += ft_print_char(*inputstr);
		inputstr++;
	}
	va_end(args);
	return (i);
}
