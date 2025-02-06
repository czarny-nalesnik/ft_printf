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

static char	*put_prefix(char *buffer, int i)
{
	buffer[i++] = 'x';
	buffer[i++] = '0';
	buffer[i++] = '\0';
	return (buffer);
}

static char	*ft_convert(unsigned long nbr)
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
	put_prefix(buffer, i);
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

int	print_vptr(void *ptr)
{
	unsigned long	addr;
	char			*result;
	int				length;

	if (ptr == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	addr = (unsigned long) ptr;
	result = ft_convert(addr);
	length = ft_strlen(result);
	reverse_string(result);
	ft_putstr_fd(result, 1);
	free(result);
	return (length);
}
