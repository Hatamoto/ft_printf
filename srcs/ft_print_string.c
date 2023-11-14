/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:59:53 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/14 17:02:42 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_string(char *str)
{
	int ret;

	ret = 0;
	while (*str)
	{
		ret += write(1, &str, 1);
		str++;
	}
	return (ret);
}
