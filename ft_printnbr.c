/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:13:22 by mchonata          #+#    #+#             */
/*   Updated: 2024/02/02 19:49:41 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define INT_MIN "-2147483648"

///	option 1
// int	ft_printnbr(int n)
// {
// 	int	nb;
// 	int	aux;

// 	if (n == -2147483648)
// 		return ((write (STDOUT_FILENO, INT_MIN, ft_strlen(INT_MIN))));
// 	printf("EDu\n");
// 	nb = n;
// 	aux = 0;
// 	if (n < 0)
// 	{
// 		aux += ft_putchar('-');
// 		nb = nb * -1;
// 	}
// 	if (nb > 9)
// 	{
// 		aux += ft_printnbr(nb / 10);
// 	}
// 	aux += ft_putchar(nb % 10 + '0');
// 	return (aux);
// }


///	option 2
static	size_t	size_nbr(int nbr)
{
	size_t	len;

	len = 1;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		(write (STDOUT_FILENO, INT_MIN, ft_strlen(INT_MIN)));
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar(n + '0');
}

int	ft_printnbr(int n)
{
	if (n == -2147483648)
		return ((write (STDOUT_FILENO, INT_MIN, ft_strlen(INT_MIN))));
	ft_putnbr_fd(n, STDOUT_FILENO);
	return (size_nbr(n));
}


///	option 3
// static	size_t	size_nbr(int nbr)
// {
// 	size_t	len;

// 	len = 1;
// 	if (nbr < 0)
// 	{
// 		nbr = nbr * -1;
// 		len++;
// 	}
// 	while (nbr >= 10)
// 	{
// 		nbr = nbr / 10;
// 		len++;
// 	}
// 	return (len);
// }

// static size_t	ft_abs(int nbr)
// {
// 	if (nbr < 0)
// 		return (-nbr);
// 	else
// 		return (nbr);
// }

// int	ft_printnbr(int n)
// {
// 	const size_t	nbr_len = size_nbr(n);
// 	size_t			temp_n;
// 	size_t			count;
// 	char			nbr_str[12];

// 	nbr_str[0] = '\0';
// 	if (n == -2147483648)
// 		return ((write (STDOUT_FILENO, INT_MIN, ft_strlen(INT_MIN))));
// 	count = 0;
// 	temp_n = ft_abs(n);
// 	while (nbr_len > count)
// 	{
// 		nbr_str[nbr_len - count - 1] = (temp_n % 10) + '0';
// 		temp_n = temp_n / 10;
// 		count++;
// 	}
// 	if (n < 0)
// 		nbr_str[0] = '-';
// 	nbr_str[count] = '\0';
// 	return (write(STDOUT_FILENO, nbr_str, nbr_len));
// }
