/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:30:18 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/14 13:03:00 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
// Remove later:
#include <stdio.h>

/*
static void	ft_init_tab(t_print *tab)
{
	tab->wdt = 0;
	tab->prc = 0;
	tab->zero = 0;
	tab->pnt = 0;
	tab->dash = 0;
	tab->tl = 0;
	tab->sign = 0;
	tab->is_zero = 0;
	tab->perc = 0;
	tab->spc = 0;
}
*/

int	ft_eval_format(const char *formstr, va_list *args, int i)
{
	char	*fspecs;
	int		retval;
	char	c;

	c = 36;
	fspecs = "udcsupxX%";
	retval = va_arg(*args, int);
	while (!(ft_strchr(fspecs, formstr[i])))
	{
		retval += write(1, &c, 1);
	}
	retval += write(1, &c, 1);
	return (retval);
}

int	ft_printf(const char *formstr, ...)
{
	int		i;
	int		retval;
	va_list	args;

	if (!formstr || *formstr == '\0')
		return (0);
	va_start(args, formstr);
	printf("VA1: %s\n", va_arg(args, char *));
	i = 0;
	retval = 0;
	while (formstr[i] != '\0')
	{
		if (formstr[i] == '%')
			retval += ft_eval_format(formstr, &args, i + 1);
		else
			retval += write(1, &formstr[i], 1);
		i++;
	}
	va_end(args);
	return (retval);
}
