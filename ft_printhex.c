/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:13:52 by mchonata          #+#    #+#             */
/*   Updated: 2024/04/08 18:30:31 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// 123 % 10 3unidades
// 123/10= 12%10 2decenas
// 123/10 = 12/10 = 1centenas
// char dec[] = "0123456789"
// dec[3]= '3'
// dec[2]= '2'
// dec[1]= '1'

// char dec[] = "MariaJoseC"
// dec[3]= 'i'
// dec[2]= 'r'
// dec[1]= 'a'

// char hex[] = "0123456789abcdef"
// hex[5] = '5'
// hex[15] = 'f'
// 123 % 16 b unidades
// 123/16= 12%16 7 decimales

// char hex[] = "0123456789ABCDEF"
// hex[5] = '5'
// hex[15] = 'F'

// char hex[] = "MariaJoseChonata"
// hex[5] = 'J'
// hex[15] = 'a'

//option 1
static	size_t	size_nbr_hex(unsigned int nbr)
{
	size_t	len;

	len = 1;
	while (nbr >= 16)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}

static void	ft_putnbr_hex(unsigned int n, const char *base)
{
	if (n > 15)
	{
		ft_putnbr_hex(n / 16, base);
		ft_putnbr_hex(n % 16, base);
	}
	else
		ft_putchar(base[n]);
}

int	ft_printhex(unsigned int n, const char *base)
{
	ft_putnbr_hex(n, base);
	return (size_nbr_hex(n));
}

//option 2
// static	size_t	size_nbr_base(unsigned int nbr, const int len_base)
// {
// 	size_t	len;

// 	len = 1;
// 	if (nbr < 0)
// 	{
// 		nbr = nbr * -1;
// 		len++;
// 	}
// 	while (nbr >= len_base)
// 	{
// 		nbr = nbr / len_base;
// 		len++;
// 	}
// 	return (len);
// }

// //len is len_base
// static void	ft_putnbr_base(unsigned int n, const char *base, const int len)
// {
// 	if (n > len - 1)
// 	{
// 		ft_putnbr_base(n / len, base, len);
// 		ft_putnbr_base(n % len, base, len);
// 	}
// 	else
// 		ft_putchar(base[n]);
// }

// int	ft_printhex(unsigned int n, const char *base)
// {
// 	const int	len_base = ft_strlen(base);

// 	ft_putnbr_base(n, base, len_base);
// 	return (size_nbr_base(n, len_base));
// }
