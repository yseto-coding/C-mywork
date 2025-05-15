/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:55:56 by yseto             #+#    #+#             */
/*   Updated: 2025/04/25 12:24:35 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	c;

// 	c = 'a';
// 	printf("%d\n", isalnum(c));
// 	printf("%d\n", ft_isalnum(c));
// 	c = '8';
// 	printf("%d\n", isalnum(c));
// 	printf("%d\n", ft_isalnum(c));
// 	c = '\n';
// 	printf("%d\n", isalnum(c));
// 	printf("%d\n", ft_isalnum(c));
// 	c = ' ';
// 	printf("%d\n", isalnum(c));
// 	printf("%d\n", ft_isalnum(c));
// 	return (0);
// }
