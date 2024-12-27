/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:39:15 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/05 20:22:31 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	i = 0;
	p = ptr;
	val = (unsigned char) value;
	while (i < num)
	{
		p[i] = val;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	i = 0;
	int	buffer[3];

	ft_memset(buffer, 1, sizeof(buffer));
	while (i < sizeof(buffer))
	{
		printf("%d ", buffer[i]);
		i++;
	}
	return (0);
}
*/
