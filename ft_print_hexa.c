/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:22:18 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/14 17:48:18 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(va_list ap)
{
	int				count;
	unsigned int	n;

	count = 0;
	n = va_arg(ap, unsigned int);
	count = ft_putnbr_base(n, "0123456789abcdef");
	return (count);
}
