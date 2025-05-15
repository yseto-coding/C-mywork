/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:22:33 by yseto             #+#    #+#             */
/*   Updated: 2025/04/25 12:24:39 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str2[10];
// 	int		c;
// 	size_t	n;

// 	// char	str1[10];
// 	c = 'A';
// 	n = 9;
// 	// memset(str1, c, n);
// 	// str1[9] = '\n';
// 	// printf("%s", str1);
// 	ft_memset(str2, c, n);
// 	str2[9] = '\n';
// 	printf("%s", str2);
// 	return (0);
// }
