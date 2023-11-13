/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:46:00 by mburakow          #+#    #+#             */
/*   Updated: 2023/11/13 15:09:05 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

typedef struct s_print
{
	va_list	args;
	int 	wdt;
	int		prc;
	int		zero;
	int		pnt;
	int		dash;
	int		tl;
	int		sign;
	int		is_zero;
	int		perc;
	int		spc;
}	t_print;


#endif
