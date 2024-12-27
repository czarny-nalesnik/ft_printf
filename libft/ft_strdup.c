/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:29:57 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/16 19:29:58 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char *src)
{
	int		src_len;
	char	*dest;

	src_len = ft_strlen(src) + 1;
	dest = (char *) malloc(src_len);
	if (dest == NULL)
		return (NULL);
	ft_strncpy(dest, src, src_len);
	return (dest);
}
/*
int main()
{
	// Test 1: Regular string
	const char *test1 = "Hello, world!";
	char *copy1 = ft_strdup(test1);
	if (copy1)
	{
		printf("Test 1 - Original: %s\n", test1);
		printf("Test 1 - Copy: %s\n", copy1);
		free(copy1);
	}
	else
	{
		printf("Test 1 - Memory allocation failed.\n");
	}

	// Test 2: Empty string
	const char *test2 = "";
	char *copy2 = ft_strdup(test2);
	if (copy2)
	{
		printf("Test 2 - Original: '%s'\n", test2);
		printf("Test 2 - Copy: '%s'\n", copy2);
		free(copy2);
	}
	else
	{
		printf("Test 2 - Memory allocation failed.\n");
	}

	// Test 3: Long string
	const char *test3 = "This is a long string 
	to test the behavior of ft_strdup with a larger input size.";
	char *copy3 = ft_strdup(test3);
	if (copy3)
	{
		printf("Test 3 - Original: %s\n", test3);
		printf("Test 3 - Copy: %s\n", copy3);
		free(copy3);
	}
	else
	{
		printf("Test 3 - Memory allocation failed.\n");
	}

	// Test 4: String with special characters
	const char *test4 = "Special\tcharacters\nlike\t\0null!";
	char *copy4 = ft_strdup(test4);
	if (copy4)
	{
		printf("Test 4 - Original: %s\n", test4);
		printf("Test 4 - Copy: %s\n", copy4);
		free(copy4);
	}
	else
	{
		printf("Test 4 - Memory allocation failed.\n");
	}
	return 0;
}
*/
