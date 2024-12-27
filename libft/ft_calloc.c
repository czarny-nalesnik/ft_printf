/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:30:32 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/16 19:30:33 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > (size_t)(-1) / size)
		return (NULL);
	total_size = nmemb * size;
	ptr = (void *) malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*
int main()
{
	// Test 1: nmemb = 0
	void *test1 = ft_calloc(0, 10);
	if (test1 != NULL) {
		printf("Test 1 passed (non-NULL for nmemb = 0).\n");
		free(test1);
	} else {
		printf("Test 1 failed.\n");
	}

	// Test 2: Valid allocation with nmemb = 5, size = 10
	void *test2 = ft_calloc(5, 10);
	if (test2 != NULL) {
		printf("Test 2 passed (memory allocated and zeroed).\n");
		// Check if memory is initialized to 0
		unsigned char *ptr = (unsigned char *)test2;
		int is_zeroed = 1;
		for (int i = 0; i < 5 * 10; i++) {
			if (ptr[i] != 0) {
				is_zeroed = 0;
				break;
			}
		}
		if (is_zeroed) {
			printf("Memory is correctly initialized to 0.\n");
		} else {
			printf("Memory is not zeroed correctly.\n");
		}
		free(test2);
	} else {
		printf("Test 2 failed.\n");
	}

	// Test 3: Large allocation, nmemb = (size_t)(-1) / 2, size = 2
	void *test3 = ft_calloc(2837942222, 2);
	if (test3 != NULL) {
		printf("Test 3 passed (allocation succeeded).\n");
		free(test3);
	} else {
		printf("Test 3 failed.\n");
	}

	// Test 4: Overflow check, nmemb = (size_t)(-1), size = 2
	void *test4 = ft_calloc((size_t)(-1), 2);
	if (test4 == NULL) {
		printf("Test 4 passed (overflow detected, returned NULL).\n");
	} else {
		printf("Test 4 failed (overflow not detected).\n");
		free(test4);
	}

	// Test 5: nmemb = 10, size = 0
	void *test5 = ft_calloc(10, 0);
	if (test5 != NULL) {
		printf("Test 5 passed (non-NULL for size = 0).\n");
		free(test5);
	} else {
		printf("Test 5 failed.\n");
	}

	return 0;
}
*/
