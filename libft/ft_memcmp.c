/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:54:15 by yseto             #+#    #+#             */
/*   Updated: 2025/04/27 16:36:06 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h> // 本家memcmp

// int	main(void)
// {
// 	const char	str1[] = "HelloWorld";
// 	const char	str2[] = "HelloWorld";
// 	const char	str3[] = "HelloMars";
// 	const char	str4[] = "Hello";
// 	size_t		n;

// 	n = 10;
// 	// ① 同じ文字列を比較
// 	printf("ft_memcmp(str1, str2, %zu) = %d\n", n, ft_memcmp(str1, str2, n));
// 	printf("memcmp(str1, str2, %zu) = %d\n", n, memcmp(str1, str2, n));
// 	// ② 違う文字列を比較
// 	printf("ft_memcmp(str1, str3, %zu) = %d\n", n, ft_memcmp(str1, str3, n));
// 	printf("memcmp(str1, str3, %zu) = %d\n", n, memcmp(str1, str3, n));
// 	// ③ 長さが違う文字列を比較
// 	printf("ft_memcmp(str1, str4, %zu) = %d\n", n, ft_memcmp(str1, str4, n));
// 	printf("memcmp(str1, str4, %zu) = %d\n", n, memcmp(str1, str4, n));
// 	// ④ 比較サイズを文字列全体にして比較
// 	n = 10;
// 	printf("ft_memcmp(str1, str3, %zu) = %d\n", n, ft_memcmp(str1, str3, n));
// 	printf("memcmp(str1, str3, %zu) = %d\n", n, memcmp(str1, str3, n));
// 	return (0);
// }
