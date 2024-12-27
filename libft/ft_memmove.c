/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:38:45 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/05 20:18:55 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (d < s)
	{
		ft_memcpy(d, s, n);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}
/*
int main(void)
{
    char src1[] = "Hello, World!";
    char dest1[20];
    char src2[] = "Overlap test";
    char dest2[20];
    char src3[] = "123456789";
    
    // Test 1: Non-overlapping regions
    printf("Test 1: Non-overlapping regions\n");
    ft_memmove(dest1, src1, strlen(src1) + 1); // Include null-terminator
    printf("Source: %s\n", src1);
    printf("Destination: %s\n\n", dest1);

    // Test 2: Overlapping regions, dest < src
    printf("Test 2: Overlapping regions (dest < src)\n");
    ft_memmove(src2 + 3, src2, strlen(src2) + 1); // Overlapping copy
    printf("Source after memmove: %s\n\n", src2);

    // Test 3: Overlapping regions, dest > src
    printf("Test 3: Overlapping regions (dest > src)\n");
    ft_memmove(src3, src3 + 3, 6); // Overlapping copy
    printf("Source after memmove: %s\n\n", src3);

    // Test 4: Edge case with zero bytes
    printf("Test 4: Edge case (zero bytes)\n");
    ft_memmove(dest2, src1, 0); // Copy 0 bytes
    printf("Source: %s\n", src1);
    printf("Destination: %s (should be unchanged)\n\n", dest2);

    // Test 5: Null pointer handling (optional if you added NULL checks)
    printf("Test 5: Null pointer handling (if implemented)\n");
    if (ft_memmove(NULL, src1, 5) == NULL)
        printf("Handled NULL destination gracefully.\n");
    if (ft_memmove(dest1, NULL, 5) == NULL)
        printf("Handled NULL source gracefully.\n");
    printf("\n");

    return 0;
}
*/
