/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:39:41 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/17 14:02:10 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int				i;
	unsigned int	u;
	char			*ost;

	i = 0;
	ost = "OSTA";
	ft_printf("Str (%s) %i in %", ost, 1);
	ost = "OSTA KAIKKI";
	i = ft_printf("Nakkikeittoa %s kolme (%d) dollaria (%c)  %d senttia.\n",
			ost, 3, '$', 50);
	ft_printf("Pituus: %d\n", i);
	i = ft_printf("Iso numero: %d\n", 12435);
	ft_printf("Pituus: %d\n", i);
	i = ft_printf("Numero 12345 heksana: %x\n", 12345);
	ft_printf("Pituus: %d\n", i);
	u = 1274643;
	i = ft_printf("Unsigned: %u\n", u);
	ft_printf("Pituus: %d\n", i);
	i = ft_printf("Nullistringi: %s\n", NULL);
	ft_printf("Pituus: %d\n", i);
	i = ft_printf("Pointterin osoite heksana: %p\n", ost);
	ft_printf("Pituus: %d\n", i);
	i = printf("Pointterin osoite heksana: %p\n", ost);
	ft_printf("Pituus: %d\n", i);
	i = ft_printf("Zero addrs: %p \n", NULL, NULL);
	ft_printf("Pituus: %d\n", i);
	ost = "ft_printf";
	ft_printf("Stringi (%s), joka loppuu %i prosenttiin %", ost, 1);
	//ft_printf("\n");
	ost = "printf";
	//printf("Stringi (%s), joka loppuu %i prosenttiin %", ost, 1);
	//printf("\n");
	printf("======================================\n");
	printf("Zero addrs: %p \n", NULL, NULL);
	printf("Printf (stdio) examples:\n");
	printf("Number 12345 as hex: %x\n", 12345);
	printf("Integers: %i %u \n", -3456, 3456);
	printf("Characters: %c %c \n", 'z', 80);
	printf("Decimals: %d %ld\n", 1997, 32000L);
	printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100,
		100);
	printf("floats: %4.2f %+.2e %E \n", 3.14159, 3.14159, 3.14159);
	printf("Preceding with empty spaces: %10d \n", 1997);
	printf("Preceding with zeros: %010d \n", 1997);
	printf("Width: %*d \n", 15, 140);
	printf("%s \n", "Educative");
	return (i);
}
