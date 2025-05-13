/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 03:32:20 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/12 14:02:16 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "printf.h"

int	print_char(va_list ap)
{
	int	i;

	i = va_arg(ap, int);
	write(1, &i, 1);
	return (1);
}