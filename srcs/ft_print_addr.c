/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:35:16 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/14 16:58:15 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// temp
#include <stdio.h>

int	ft_print_addr(void *addr)
{
	int	ret;

	// temp
	printf("%p", addr);
	ret = 8;
	return (ret);
}
