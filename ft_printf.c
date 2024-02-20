/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:25:13 by mchonata          #+#    #+#             */
/*   Updated: 2024/02/19 21:57:53 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

static	int	ft_process(char ctrl, va_list *args)
{
	if (ctrl == '%')
		return (ft_putchar('%'));
	else if (ctrl == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (ctrl == 's')
		return (ft_printstr(va_arg(*args, char *)));
	else if (ctrl == 'd' || ctrl == 'i')
		return (ft_printnbr(va_arg(*args, int)));
	else if (ctrl == 'u')
		return (ft_printuints(va_arg(*args, int)));
	else if (ctrl == 'x')
		return (ft_printhex(va_arg(*args, int), BASE16LOW));
	else if (ctrl == 'X')
		return (ft_printhex(va_arg(*args, int), BASE16UPP));
	else if (ctrl == 'p')
		return (ft_printptr(va_arg(*args, int), BASE16LOW));
	return (0);
}
// ptr
// hex

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
