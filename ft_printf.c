/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:25:13 by mchonata          #+#    #+#             */
/*   Updated: 2023/12/21 18:22:35 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_process(char ctrl, va_list *args)
{
	if (ctrl == 'c')
		return (write(1, args, 1));
	return (0);
}
// str
// ptr
// int
// uints
// hex
// %

int	ft_printf(char const *ctrl, ...)
{
	va_list	args;
	int		i;
	int		total;

	i = 0;
	total = 0;
	va_start(args, ctrl);
	while (ctrl[i])
	{
		if (ctrl[i] == '%')
		{
			total += ft_process(ctrl[i], &args);
			i++;
		}
		else
			total += write(1, ctrl, 1);
		i++;
	}
	va_end(args);
	return (total);
}
