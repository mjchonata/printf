/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:13:22 by mchonata          #+#    #+#             */
/*   Updated: 2024/02/02 13:35:21 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define INT_MIN "-2147483648"

int	ft_printnbr(int n)
{
	int	nb;
	int	aux;

	if (n == -2147483648)
		return ((write (STDOUT_FILENO, INT_MIN, ft_strlen(INT_MIN))));
	nb = n;
	aux = 0;
	if (n < 0)
	{
		aux += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		aux += ft_printnbr(nb / 10);
	}
	aux += ft_putchar(nb % 10 + '0');
	return (aux);
}
