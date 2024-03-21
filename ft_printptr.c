/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:06:43 by mchonata          #+#    #+#             */
/*   Updated: 2024/03/21 16:47:26 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	size_t	size_ptr(uintptr_t nbr)
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

static void	ft_putptr_hex(uintptr_t n, const char *base)
{
	if (n >= 16)
		ft_putptr_hex(n / 16, base);
	ft_putchar(base[n % 16]);
}

int	ft_printptr(uintptr_t ptr, const char *base)
{
	int	len;

	len = write(1, "0x", 2);
	if (ptr == 0)
		return (write (1, "0", 1) + len);
	ft_putptr_hex(ptr, base);
	len += size_ptr(ptr);
	return (len);
}
