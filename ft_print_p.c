/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:33:42 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/14 18:30:12 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, const char *base)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_base((n / 16), base);
	c = base[n % 16];
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_print_p(va_list ap)
{
	void			*ptr;
	unsigned long	n;
	int				res;

	ptr = va_arg(ap, void *);
	if (!ptr)
		return (write(1, "(nil)", 5), 5);
	n = (unsigned long)ptr;
	write(1, "0x", 2);
	res = ft_putnbr_base(n, "0123456789abcdef");
	return (res + 2);
}
