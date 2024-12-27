/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:23:54 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/05 20:23:59 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < len)
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int main() {
    // Test case 1: Finding a substring in a string
    const char *str1 = "Hello, world!";
    const char *sub1 = "world";
    size_t len1 = 13; // Search the entire string
    char *result1 = ft_strnstr(str1, sub1, len1);
    if (result1) {
        printf("Test 1: Found '%s' at position %ld\n", sub1, result1 - str1);
    } else {
        printf("Test 1: '%s' not found\n", sub1);
    }

    // Test case 2: Substring is at the start of the string
    const char *str2 = "Hello, world!";
    const char *sub2 = "Hello";
    size_t len2 = 13; // Search the entire string
    char *result2 = ft_strnstr(str2, sub2, len2);
    if (result2) {
        printf("Test 2: Found '%s' at position %ld\n", sub2, result2 - str2);
    } else {
        printf("Test 2: '%s' not found\n", sub2);
    }

    // Test case 3: Substring not found within the length limit
    const char *str3 = "Hello, world!";
    const char *sub3 = "world";
    size_t len3 = 5; // Limit search to first 5 characters
    char *result3 = ft_strnstr(str3, sub3, len3);
    if (result3) {
        printf("Test 3: Found '%s' at position %ld\n", sub3, result3 - str3);
    } else {
        printf("Test 3: '%s' not found\n", sub3);
    }

    return 0;
}
*/