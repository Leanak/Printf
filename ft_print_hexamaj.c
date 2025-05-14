/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexamaj.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:39:10 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/14 18:23:22 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexamaj(va_list ap)
{
	int				count;
	unsigned int	n;

	count = 0;
	n = va_arg(ap, unsigned int);
	count += ft_putnbr_base(n, "0123456789ABCDEF");
	return (count);
}
