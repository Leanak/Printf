/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:34:16 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/14 18:23:16 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_putnbr_unsigned(unsigned int n)
{
	char	res;

	if (n > 9)
		ft_putnbr(n / 10);
	res = (n % 10) + 48;
	write(1, &res, 1);
}

int	ft_print_unsigned(va_list ap)
{
	unsigned int	n;
	unsigned int	len;

	n = va_arg(ap, unsigned int);
	len = count_unsigned(n);
	ft_putnbr_unsigned(n);
	return (len);
}
