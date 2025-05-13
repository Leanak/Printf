/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 03:47:09 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/12 16:25:50 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;
	va_list	args;
	va_start(args, format);

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == 's')
		{
			count += print_string(args);
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			count += print_char(args);
			i++;
		}
		if (format[i] == '%' && format[i + 1] == 'd')
		{
			count += print_int(args);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	char	*str = "Hey";
	ft_printf("Voici ma chaine %s", str);
	return (0);
}