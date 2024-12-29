/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:00:56 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/27 20:00:57 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_format(const char c, va_list ap);
int	print_char(int nbr);
int	print_string(char *s);
int	print_vptr(void *ptr);
int	print_decimal(int nbr);
int	print_uint(unsigned int nbr);
int	print_hex(unsigned int nbr, char specifier);

#endif
