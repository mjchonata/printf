/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuints.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:03:31 by mchonata          #+#    #+#             */
/*   Updated: 2024/04/08 18:08:03 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_printuints(unsigned int n)
// {
// 	int	aux;

// 	aux = 0;
// 	if (n > 9)
// 	{
// 		aux += ft_printuints(n / 10);
// 	}
// 	aux += ft_putchar(n % 10 + '0');
// 	return (aux);
// }

static	size_t	size_nbr(unsigned int nbr)
{
	size_t	len;

	len = 1;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static void	ft_putnbr_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar(n + '0');
}

int	ft_printuints(unsigned int n)
{
	ft_putnbr_fd(n, STDOUT_FILENO);
	return (size_nbr(n));
}
