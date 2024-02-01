/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uints.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:03:31 by mchonata          #+#    #+#             */
/*   Updated: 2024/02/01 16:27:27 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uints(unsigned int n)
{
	int	aux;

	aux = 0;
	if (n > 9)
	{
		aux += ft_uints(n / 10);
	}
	aux += ft_putchar(n % 10 + '0');
	return (aux);
}
