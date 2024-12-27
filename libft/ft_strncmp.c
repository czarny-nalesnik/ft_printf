/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:19:28 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/05 20:19:48 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *) s1;
	string2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (string1[i] != string2[i])
		{
			return (string1[i] - string2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char    s1[] = "test\200";
	char    s2[] = "test\0";
	size_t  n = 6;

	printf("%d", ft_strncmp(s1, s2, 6));
	return (0);
}


int main(void)
{
	// Test case 1: Exact match
	printf("Test 1: Exact match\n");
	printf("ft_strncmp: %d\n", ft_strncmp("hello", "hello", 5));
	printf("strncmp:    %d\n\n", strncmp("hello", "hello", 5));

	// Test case 2: First string greater than second
	printf("Test 2: First string greater\n");
	printf("ft_strncmp: %d\n", ft_strncmp("hello", "helln", 5));
	printf("strncmp:    %d\n\n", strncmp("hello", "helln", 5));

	// Test case 3: Second string greater than first
	printf("Test 3: Second string greater\n");
	printf("ft_strncmp: %d\n", ft_strncmp("helln", "hello", 5));
	printf("strncmp:    %d\n\n", strncmp("helln", "hello", 5));

	// Test case 4: Compare fewer characters (prefix match)
	printf("Test 4: Partial comparison\n");
	printf("ft_strncmp: %d\n", ft_strncmp("hello", "helxy", 3));
	printf("strncmp:    %d\n\n", strncmp("hello", "helxy", 3));

	// Test case 5: Compare with different lengths, n larger than shorter string
	printf("Test 5: Different lengths\n");
	printf("ft_strncmp: %d\n", ft_strncmp("hello", "hel", 5));
	printf("strncmp:    %d\n\n", strncmp("hello", "hel", 5));

	// Test case 6: Compare with n = 0
	printf("Test 6: Zero characters to compare\n");
	printf("ft_strncmp: %d\n", ft_strncmp("hello", "hello", 0));
	printf("strncmp:    %d\n\n", strncmp("hello", "hello", 0));

	// Test case 7: Empty strings
	printf("Test 7: Empty strings\n");
	printf("ft_strncmp: %d\n", ft_strncmp("", "", 5));
	printf("strncmp:    %d\n\n", strncmp("", "", 5));

	// Test case 8: One empty string
	printf("Test 8: One string empty\n");
	printf("ft_strncmp: %d\n", ft_strncmp("hello", "", 5));
	printf("strncmp:    %d\n\n", strncmp("hello", "", 5));

	// Test case 9: Non-ASCII characters
	printf("Test 9: Non-ASCII characters\n");
	printf("ft_strncmp: %d\n", ft_strncmp("h\xFAllo", "h\xFAllo", 5));
	printf("strncmp:    %d\n\n", strncmp("h\xFAllo", "h\xFAllo", 5));

	return 0;
}
*/
