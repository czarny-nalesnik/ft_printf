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

int	print_decimal(int nbr)
{
	char	*result;
	int		len;

	result = ft_itoa(nbr);
	ft_putstr_fd(result, 1);
	len = ft_strlen(result);
	free(result);
	return (len);
}
