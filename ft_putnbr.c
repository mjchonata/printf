/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:13:22 by mchonata          #+#    #+#             */
/*   Updated: 2024/01/23 14:58:54 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define INT_MIN "-2147483648"

int	ft_putnbr(int n)
{
	int	nb;

	if (n == -2147483648)
		return ((write (STDOUT_FILENO, INT_MIN, ft_strlen(INT_MIN))));
	nb = n;
	if (n < 0)
	{
		nb += ft_putchar('-');
		nb = nb * -1;
	}
	if (n > 9)
	{
		nb += ft_putnbr(nb / 10);
		nb += ft_putnbr(nb % 10);
	}
	else
		nb += ft_putchar(nb + '0');
	return (nb);
}
