/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:29:39 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/16 19:29:41 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;
	int		size_total;

	i = 0;
	j = 0;
	size_total = ft_strlen(s1) + ft_strlen(s2);
	result = (char *) malloc(size_total + 1);
	if (result == NULL)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
/*
int main()
{
	// Test 1: Both strings are non-empty
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 1: %s\n", result);  // Expected: "Hello, world!"
		free(result);
	}

	// Test 2: First string is empty
	s1 = "";
	s2 = "world!";
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 2: %s\n", result);  // Expected: "world!"
		free(result);
	}

	// Test 3: Second string is empty
	s1 = "Hello, ";
	s2 = "";
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 3: %s\n", result);  // Expected: "Hello, "
		free(result);
	}

	// Test 4: Both strings are empty
	s1 = "";
	s2 = "";
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 4: %s\n", result);  // Expected: ""
		free(result);
	}

	// Test 5: Special characters in strings
	s1 = "Hello, ";
	s2 = "\tworld!\n";
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Test 5: %s\n", result);  // Expected: "Hello, 	world!\n"
		free(result);
	}

	return 0;
}
*/
