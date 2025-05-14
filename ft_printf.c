/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:01:32 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/14 18:28:13 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c)
{
	char	*str;

	str = "sdcpuxXi";
	while (*str)
	{
		if (c == *str)
			return (1);
		else
			str++;
	}
	return (0);
}

int	ft_conversion(const char *str, va_list args)
{
	int	count;

	count = 0;
	if (*str == 's')
		count += ft_print_string(args);
	if (*str == 'i' || *str == 'd')
		count += ft_print_int(args);
	if (*str == 'c')
		count += ft_print_char(args);
	if (*str == 'p')
		count += ft_print_p(args);
	if (*str == 'u')
		count += ft_print_unsigned(args);
	if (*str == 'x')
		count += ft_print_hexa(args);
	if (*str == 'X')
		count += ft_print_hexamaj(args);
	if (*str == '%' || ft_check(*str) == 0)
	{
		write(1, str, 1);
		count += 1;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_conversion(format, args);
		}
		else
		{
			write(1, format, 1);
			count += 1;
		}
		format++;
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	int		a = 5;
	//char	*str = "Hey";
	int		count;

	count = ft_printf("Int (%z) : %d\n", a);
	//printf("MOn resultat est : %X et ma chaine est : %s\n", a, str);
	printf ("Mon count est de : %d\n", count);
	return (0);
}*/