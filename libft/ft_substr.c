/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:28:50 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/16 19:29:00 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	i = 0;
	sub = (char *) malloc(len + 1);
	if (sub == NULL || s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
	{
		sub[i] = '\0';
		return (sub);
	}
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	// Test 1: Normal case
	char *result1 = ft_substr("Hello, World!", 7, 5);
	printf("Test 1: '%s'\n", result1); // Expected: "World"
	free(result1);

	// Test 2: Start beyond the string length
	char *result2 = ft_substr("Hello", 10, 3);
	printf("Test 2: '%s'\n", result2); // Expected: ""
	free(result2);

	// Test 3: Length exceeds remaining characters
	char *result3 = ft_substr("Hello", 2, 10);
	printf("Test 3: '%s'\n", result3); // Expected: "llo"
	free(result3);

	// Test 4: NULL input string
	char *result4 = ft_substr(NULL, 0, 5);
	printf("Test 4: '%s'\n", result4); // Expected: (null)

	// Test 5: Extract from the start of the string
	char *result5 = ft_substr("42 is amazing!", 0, 2);
	printf("Test 5: '%s'\n", result5); // Expected: "42"
	free(result5);

	return (0);
}
*/
