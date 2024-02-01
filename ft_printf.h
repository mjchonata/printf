/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:25:30 by mchonata          #+#    #+#             */
/*   Updated: 2024/02/01 18:22:25 by mchonata         ###   ########.fr       */
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
int		ft_uints(unsigned int n);
int		ft_hex(unsigned int n);
// ptr
// hex
// %
#endif
