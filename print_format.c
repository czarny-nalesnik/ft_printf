/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:37:48 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/27 20:37:49 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count = print_char(va_arg(ap, int));
	else if (specifier == 's')
		count = print_string(va_arg(ap, char*));
	else if (specifier == 'p')
		count = print_vptr(va_arg(ap, void*));
	else if (specifier == 'd' || specifier == 'i')
		count = print_decimal(va_arg(ap, int));
	else if (specifier == 'u')
		count = print_uint(va_arg(ap, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		count = print_hex(va_arg(ap, int));
	else if (specifier == '%')
		count = print_char('%');
	return (count);
}