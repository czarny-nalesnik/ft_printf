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
		print_char();
	else if (specifier == 's')
		print_string();
	else if (specifier == 'p')
		print_vptr();
	else if (specifier == 'd' || specifier == 'i' || specifier == 'u')
		print_decimal();
	else if (specifier == 'x' || specifier == 'X')
		print_hex();
	else if (specifier == '%')
		print_char('%');
	return (count);
}