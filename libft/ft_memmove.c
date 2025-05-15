/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:27:59 by yseto             #+#    #+#             */
/*   Updated: 2025/04/29 22:27:31 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	if (d == s || n == 0)
		return (dest);
	if (d < s || d >= s + n)
		ft_memcpy(d, s, n);
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

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "1234567890";
// 	char	str2[] = "1234567890";

// 	// オーバーラップしている：src = &str[0], dest = &str[4]
// 	memmove(&str1[4], &str1[0], 6); // コピーする内容は "123456"
// 	printf("結果: %s\n", str1);     // 結果: 1234123456
// 	ft_memmove(&str2[4], &str2[0], 6);
// 	printf("結果: %s\n", str2);
// 	return (0);
// }
