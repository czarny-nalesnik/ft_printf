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

static char	*ft_strtoupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

static char	*ft_convert(unsigned int nbr)
{
	char	*base;
	char	buffer[64];
	char	*result;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	while (nbr > 0)
	{
		buffer[i++] = base[nbr % 16];
		nbr /= 16;
	}
	buffer[i] = '\0';
	result = malloc(ft_strlen(buffer) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (buffer[i])
	{
		result[i] = buffer[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static void	reverse_string(char *str)
{
	int		i;
	int		len;
	char	temp;

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

int	print_hex(unsigned int nbr, char specifier)
{
	char			*result;
	int				length;
	long			num;

	num = (long) nbr;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num == LONG_MIN)
	{
		ft_putstr_fd("-9223372036854775808", 1);
		return (19);
	}
	result = ft_convert(nbr);
	reverse_string(result);
	if (specifier == 'X')
		ft_strtoupper(result);
	ft_putstr_fd(result, 1);
	length = ft_strlen(result);
	free(result);
	return (length);
}
