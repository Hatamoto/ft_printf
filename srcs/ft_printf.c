/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:30:18 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/14 22:16:15 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include "ft_printf.h"
// Remove later:
#include <stdio.h>

int	eval_format(const char *inputstr, void *arg)
{
	int	ret;

	ret = 0;
	if (*inputstr == 'c')
		ret += ft_print_char((char)arg);
	if (*inputstr == 's')
		ret += ft_print_string((char *)arg);
	//if (*inputstr == 'p')
	//	ret += ft_print_addr((void *)arg);
	if (*inputstr == 'd')
		ret += ft_print_int((int)arg);
	//if (*inputstr == 'i')
	//	ret += ft_print_bint((void *)arg);
	//if (*inputstr == 'u')
	//	ret += ft_print_uint((void *)arg);
	if (*inputstr == 'x')
		ret += ft_print_hex((void *)arg);
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
				i += eval_format(inputstr, va_arg(args, void *));
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
