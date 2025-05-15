/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:47:28 by yseto             #+#    #+#             */
/*   Updated: 2025/05/01 22:13:13 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	s[] = "teste";
// 	char		c;
// 	char		*p;

// 	c = '\0';
// 	p = (char *)s;
// 	printf("%p	", p);
// 	printf("%s\n", p);
// 	p = ft_strchr(s, c);
// 	printf("%p	", p);
// 	printf("%s\n", p);
// 	return (0);
// }
