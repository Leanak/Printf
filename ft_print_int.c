/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 05:00:39 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/14 17:48:25 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_int(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{	
		count++;
		n = -n;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_putnbr(int n)
{
	char	res;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	res = (n % 10) + 48;
	write(1, &res, 1);
}

int	ft_print_int(va_list ap)
{
	int		len;
	int		i;

	i = va_arg(ap, int);
	len = count_int(i);
	ft_putnbr(i);
	return (len);
}
