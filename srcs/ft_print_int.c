/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:27:55 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/14 19:19:14 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

/*
int	count_int_len(int dec)
{
	int	ret;

	ret = 0;
	if (dec == -2147483648)
		return (11);
	if (dec == 0)
		return (1);
	else if (dec < 0)
	{
		dec *= -1;
		ret++;
	}
	while (dec >= 1)
	{
		dec /= 10;
		ret++;
	}
	return (ret);
}
*/

int	ft_print_int(int dec)
{
	int	ret;

	ret = 0;
	if (dec == -2147483648)
	{
		ft_print_char('-');
		ft_print_char('2');
		ft_print_int(147483648);
		ret = 11;
	}
	else if (dec < 0)
	{
		ret += ft_print_char('-');
		dec *= -1;
		ret += ft_print_int(dec);
	}
	else if (dec > 9)
	{
		ret += ft_print_int(dec / 10);
		ret += ft_print_int(dec % 10);
	}
	else
	{
		ret += ft_print_char(dec + 48);
	}
	return (ret);
}
