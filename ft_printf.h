/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:25:30 by mchonata          #+#    #+#             */
/*   Updated: 2024/01/23 14:49:11 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(char const *cntrl, ...);
int		ft_putchar(char c);
size_t	ft_strlen(char *s);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
// char
// str
// ptr
// int
// uints
// hex
// %
#endif
