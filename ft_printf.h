/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:25:30 by mchonata          #+#    #+#             */
/*   Updated: 2024/03/21 17:31:28 by mchonata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# define BASE16UPP "0123456789ABCDEF"
# define BASE16LOW "0123456789abcdef"

int		ft_printf(char const *cntrl, ...);
int		ft_putchar(char c);
size_t	ft_strlen(char *s);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printuints(unsigned int n);
int		ft_printhex(unsigned int n, const char *base);
int		ft_printptr(uintptr_t ptr, const char *base);
#endif
