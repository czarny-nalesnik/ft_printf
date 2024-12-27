/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:02:01 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/05 20:02:03 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*array1;
	const unsigned char	*array2;
	size_t				i;

	array1 = (const unsigned char *) s1;
	array2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (array1[i] != array2[i])
		{
			return (array1[i] - array2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main() {
	// Test 1: Equal memory regions
	char s1[] = "Hello";
	char s2[] = "Hello";
	int res1 = ft_memcmp(s1, s2, 5);
	printf("Test 1 res: %d (Expected: 0)\n", res1);

	// Test 2: Memory regions are different at the first byte
	char s3[] = "Hello";
	char s4[] = "Jello";
	int res2 = ft_memcmp(s3, s4, 5);
	printf("Test 2 res: %d (Expected: positive value, greater than 0)\n", res2);

	// Test 3: Memory regions are different later on (after first 3 bytes)
	char s5[] = "Hello";
	char s6[] = "HelLo";
	int res3 = ft_memcmp(s5, s6, 5);
	printf("Test 3 res: %d (Expected: negative value, less than 0)\n", res3);

	return 0;
}
*/