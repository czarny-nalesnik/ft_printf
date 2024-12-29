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

static void	convert_to_str_unsigned(char *str, size_t *size, unsigned int n)
{
	while (n != 0)
	{
		str[*size] = (n % 10) + '0';
		n = n / 10;
		(*size)--;
	}
}

static int	ft_number_len_unsigned(unsigned int nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa_unsigned(unsigned int n)
{
	size_t	size;
	char	*str;

	size = ft_number_len_unsigned(n);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str[size] = '\0';
	size--;
	convert_to_str_unsigned(str, &size, n);
	return (str);
}

int	print_uint(unsigned int nbr)
{
	char			*result;
	unsigned int	len;

	result = ft_itoa_unsigned(nbr);
	ft_putstr_fd(result, 1);
	len = ft_strlen(result);
	free(result);
	return (len);
}
