/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:29:06 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/16 19:29:09 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_skipwhitespace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
	{
		i++;
	}
	return (i);
}

static int	ft_checksign(const char c, int *i)
{
	int	sign;

	sign = 1;
	if (c == '+')
	{
		(*i)++;
	}
	else if (c == '-')
	{
		sign = -1;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	i = ft_skipwhitespace(str);
	sign = ft_checksign(str[i], &i);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}
/*
int main(void) {
    // Test cases
    const char *test1 = "   42";          
    const char *test2 = "   -123abc";     
    const char *test3 = "+456";      
    const char *test4 = "  2147483647";   
    const char *test5 = "  -2147483648";

    // Testing the function
    printf("Test 1: \"%s\" => %d\n", test1, ft_atoi(test1));
    printf("Test 2: \"%s\" => %d\n", test2, ft_atoi(test2));
    printf("Test 3: \"%s\" => %d\n", test3, ft_atoi(test3));
    printf("Test 4: \"%s\" => %d\n", test4, ft_atoi(test4));
    printf("Test 5: \"%s\" => %d\n", test5, ft_atoi(test5));

    return 0;
}
*/
