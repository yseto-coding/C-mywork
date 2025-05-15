/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:25:02 by yseto             #+#    #+#             */
/*   Updated: 2025/05/01 18:09:22 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	src[] = "Hello";
// 	char	dest1[10];
// 	char	dest2[10];

// 	memcpy(dest1, src, 6);       // 6バイト（"Hello\0"）をコピー
// 	printf("dest: %s\n", dest1); // 出力: dest: Hello
// 	ft_memcpy(dest2, src, 6);    // 6バイト（"Hello\0"）をコピー
// 	printf("dest: %s\n", dest2); // 出力: dest: Hello
// 	return (0);
// }
