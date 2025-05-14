/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 05:08:19 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/14 18:26:13 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
//Librairie a supprimer
# include <stdio.h>

//Fonctions libprintf

//printf
int		ft_printf(const char *format, ...);
int		ft_conversion(const char *str, va_list args);
int		ft_check(char c);

//%c conversion
int		ft_print_char(va_list ap);

//%s conversion
int		ft_strlen(const char *str);
int		ft_print_string(va_list ap);

//%d / %i conversion
int		ft_print_int(va_list ap);
void	ft_putnbr(int n);
int		count_int(int n);

//%p conversion
int		ft_print_p(va_list ap);
int		ft_putnbr_base(unsigned long n, const char *base);

//%u conversion
int		ft_print_unsigned(va_list ap);
void	ft_putnbr_unsigned(unsigned int n);
int		count_unsigned(unsigned int n);

//%x / X conversion
int		ft_print_hexa(va_list ap);
int		ft_print_hexamaj(va_list ap);

#endif