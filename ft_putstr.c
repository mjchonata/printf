/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:23:58 by mchonata          #+#    #+#             */
/*   Updated: 2024/01/22 21:21:59 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define WRITE_NULL "(null)"

int	ft_putstr(char *str)
{
	size_t	len;

	if (!str)
		return (write (STDOUT_FILENO, WRITE_NULL, ft_strlen(WRITE_NULL)));
	len = ft_strlen(str);
	return (write (1, str, len));
}
