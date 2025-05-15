/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:38:18 by yseto             #+#    #+#             */
/*   Updated: 2025/04/27 17:13:21 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include "libft.h" // ft_strnstr
// #include <stdio.h> // printf

// int	main(void)
// {
// 	const char	*big;
// 	const char	*little;
// 	size_t		len;
// 	char		*result;

// 	printf("=== ft_strnstr Test ===\n");
// 	// Test 1: 普通に見つかる場合
// 	big = "Hello World!";
// 	little = "World";
// 	len = 12;
// 	result = ft_strnstr(big, little, len);
// 	printf("Test 1: %s\n", result ? result : "NULL");
// 	// Test 2: 検索範囲が狭くて見つからない場合
// 	big = "Hello World!";
// 	little = "World";
// 	len = 5;
// 	result = ft_strnstr(big, little, len);
// 	printf("Test 2: %s\n", result ? result : "NULL");
// 	// Test 3: littleが空文字の場合
// 	big = "Hello World!";
// 	little = "";
// 	len = 5;
// 	result = ft_strnstr(big, little, len);
// 	printf("Test 3: %s\n", result ? result : "NULL");
// 	// Test 4: bigが空文字でlittleも空文字
// 	big = "";
// 	little = "";
// 	len = 5;
// 	result = ft_strnstr(big, little, len);
// 	printf("Test 4: %s\n", result ? result : "NULL");
// 	// Test 5: bigが空文字でlittleが空じゃない
// 	big = "";
// 	little = "a";
// 	len = 5;
// 	result = ft_strnstr(big, little, len);
// 	printf("Test 5: %s\n", result ? result : "NULL");
// 	return (0);
// }
