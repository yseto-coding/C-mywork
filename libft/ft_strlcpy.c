/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 21:03:49 by yseto             #+#    #+#             */
/*   Updated: 2025/04/27 12:07:39 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest1[5];
// 	char	dest2[5];
// 	char	src[] = "Hello World!";

// 	ft_strlcpy(dest1, src, 10);
// 	strlcpy(dest2, src, 10);
// 	printf("%s\n", dest1);
// 	printf("%s\n", dest2);
// 	return (0);
// }
