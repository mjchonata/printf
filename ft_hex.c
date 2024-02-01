/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:13:52 by mchonata          #+#    #+#             */
/*   Updated: 2024/02/01 19:27:24 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int n)
{
	int	aux;

	aux = 0;
	if (n > 15)
	{
		aux += ft_hex(n / 16);
	}
	aux += ft_putchar(n % 16 + '0');
	return (aux);
}