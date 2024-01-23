/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:25:13 by mchonata          #+#    #+#             */
/*   Updated: 2024/01/23 15:26:47 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

static	int	ft_process(char ctrl, va_list *args)
{
	if (ctrl == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (ctrl == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (ctrl == 'd' || ctrl == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	return (0);
}
// ptr
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
			i++;
			total += ft_process(ctrl[i], &args);
		}
		else
			total += write(1, &ctrl[i], 1);
		i++;
	}
	va_end(args);
	return (total);
}
