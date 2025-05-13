/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 05:08:19 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/12 16:29:41 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

char	*ft_itoa(int n);
int		print_char(va_list ap);
int		print_string(va_list ap);
int		print_int(va_list ap);
int		ft_strlen(char *str);

#endif