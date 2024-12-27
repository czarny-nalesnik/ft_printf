/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:19:28 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/05 20:19:48 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_occurrence;

	i = 0;
	last_occurrence = -1;
	while (s[i])
	{
		if (s[i] == (char) c)
		{
			last_occurrence = i;
		}
		i++;
	}
	if (c == '\0')
		return ((char *) &s[i]);
	if (last_occurrence == -1)
		return (NULL);
	return ((char *) &s[last_occurrence]);
}
