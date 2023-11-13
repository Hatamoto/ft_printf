/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:30:18 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/13 19:04:13 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include "ft_printf.h"
// Remove later:
#include <stdio.h>

static t_print	*ft_init_tab(t_print *tab)
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
	return (tab);
}

static int	ft_eval_formstr(t_print *tab, const char *formstr, int i)
{
	int		retval;
	char	*fspecs;

	retval = 0;
	fspecs = "udcsupxX%";
	tab->spc = 1;
	while (!ft_strchr(fspecs, formstr[i]))
	{
		// Here go the tags
		i++;
	}
	if (formstr[i] == 's')
		printf("<str>");
	if (formstr[i] == 'd')
		printf("<int>");
	if (formstr[i] == 'i')
		printf("<int>");
	return (retval);
}

int ft_printf(const char *formstr, ...)
{
	int		i;
	int		retval;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_init_tab(tab);
	va_start(tab->args, formstr);
	i = -1;
	retval = 0;
	while (formstr[i++])
	{
		if (formstr[i] == '%')
			i = ft_eval_formstr(tab, formstr, i + 1);
		else
			retval += write(1, &formstr[i], 1);
	}
	va_end(tab->args);
	retval += tab->tl;
	free (tab);
	return (retval);
}
