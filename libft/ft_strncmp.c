/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:02:48 by yseto             #+#    #+#             */
/*   Updated: 2025/05/01 20:35:57 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (n == 0)
		return (0);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (p1[i] && p2[i] && i < n - 1 && p1[i] == p2[i])
		i++;
	return (p1[i] - p2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	// char	s1[] = "I have a cat.";
// 	// char	s2[] = "I have A cat.";
// 	printf("%d		", ft_strncmp("abcdef", "abc\375xx", 5));
// 	printf("%d		\n", strncmp("abcdef", "abc\375xx", 5));
// 	return (0);
// }
