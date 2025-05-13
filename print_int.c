/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 05:00:39 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/12 14:05:01 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "printf.h"

static int	count_int(long n)
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

static void	ft_putnbr_fd(int n)
{
	int	res;

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
		ft_putnbr(n % 10);
	}
	if (n >= 0 && n <= 9)
	{
		res = n + 48;
		write(1, &res, 1);
	}
}

int	print_int(va_list ap)
{
	int		len;
	int		i;

	i = va_arg(ap, int);
	len = count_int(i);
	ft_putnbr_fd(i);
	return (len);
}