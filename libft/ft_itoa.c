/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                       :+:      :+:    :+:      */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:19:28 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/05 20:19:48 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	convert_to_str(char *str, size_t *size, int n)
{
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[*size] = (n % 10) + '0';
		n = n / 10;
		(*size)--;
	}
}

static int	ft_number_len(int nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*ft_limits(int nbr)
{
	if (nbr == INT_MIN)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*str;
	char	*limit;

	limit = ft_limits(n);
	size = ft_number_len(n);
	if (limit)
		return (limit);
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
	convert_to_str(str, &size, n);
	return (str);
}
