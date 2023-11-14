/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:09:54 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/14 22:52:12 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_hex(int num)
{
	int	ret;

	ret = 0;
	if (num > 15)
	{
		ret += ft_print_hex(num / 16);
		ret += ft_print_hex(num % 16);
	}
	else 
		ret += ft_print_char(hex[num]);	
	
	return (ret);
}
