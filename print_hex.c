/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:37:48 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/27 20:37:49 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_printf.h"

static void reverse_string(char *str)
{
	int		i;
	int		len;
	char 	temp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
}

int print_hex(int nbr)
{
	char	base[16] = "0123456789abcdef";
	char	result[64];
	int		i;
	if (nbr == -2147483648)
	{
		ft_putstr_fd("80000000", 1);
		return (8);
	}
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	i = 0;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		result[i++] = base[nbr % 16];
		nbr /= 16;
	}
	result[i] = '\0';
	reverse_string(result);
	ft_putstr_fd(result, 1);
	return (ft_strlen(result));
}