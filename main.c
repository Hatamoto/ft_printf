/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:39:41 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/14 20:00:27 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

int main(void)
{
	int		i;
	char 	*ost;

	i = 0;
	ost = "OSTA";
	i = ft_printf("Nakkikeittoa %s kolme (%d) dollaria (%c)  %d senttia.\n", ost, 3, '$', 50);
	ft_printf("Pituus: %d\n", i);
	i = ft_printf("Iso numero: %d\n", 12435);
	ft_printf("Pituus: %d\n", i);
	return (i);
}
