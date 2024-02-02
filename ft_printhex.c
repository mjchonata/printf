/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:13:52 by mchonata          #+#    #+#             */
/*   Updated: 2024/02/02 15:39:50 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int n)
{
	int	aux;

	aux = 0;
	if (n > 15)
	{
		aux += ft_printhex(n / 16);
	}
	aux += ft_putchar(n % 16 + '0');
	return (aux);
}
