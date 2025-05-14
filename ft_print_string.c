/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 03:41:33 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/14 18:12:58 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_print_string(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (!str)
		str = "(null)";
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}
