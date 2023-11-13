/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:39:41 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/13 19:05:15 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main(void)
{
	int	i;

	i = 0;
	i = ft_printf("Nakkikeittoa %s kolme %d markkaa %i", "osta", 3, 50);
	return (i);
}
