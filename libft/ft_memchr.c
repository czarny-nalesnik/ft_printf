/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:40:13 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/16 21:44:09 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*array;
	size_t				i;

	i = 0;
	array = (const unsigned char *) s;
	while (i < n)
	{
		if (array[i] == (unsigned char) c)
		{
			return ((void *)&array[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	// Test case 1: Character found
	char test1[] = "Hello, world!";
	char t1 = 'o';
	char *result1 = ft_memchr(test1, t1, sizeof(test1));
	if (result1) {
		printf("Test 1: Found '%c' at position: %ld\n", t1, result1 - test1);
	} else {
		printf("Test 1: Character '%c' not found.\n", t1);
	}

	// Test case 2: Character not found
	char test2[] = "Hello, world!";
	char t2 = 'z';
	char *result2 = ft_memchr(test2, t2, sizeof(test2));
	if (result2) {
		printf("Test 2: Found '%c' at position: %ld\n", t2, result2 - test2);
	} else {
		printf("Test 2: Character '%c' not found.\n", t2);
	}

	// Test case 3: Search for null byte (0)
	char test3[] = "Hello, world!\0";
	char target3 = '\0';
	char *result3 = ft_memchr(test3, target3, sizeof(test3));
	if (result3) {
		printf("Test 3: Found '\\0' at position: %ld\n", result3 - test3);
	} else {
		printf("Test 3: Null byte not found.\n");
	}

	return 0;
}
*/
