/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:51:08 by yseto             #+#    #+#             */
/*   Updated: 2025/04/25 12:24:40 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	c;

// 	c = '1';
// 	printf("%d\n", isprint(c));
// 	printf("%d\n", ft_isprint(c));
// 	c = 'a';
// 	printf("%d\n", isprint(c));
// 	printf("%d\n", ft_isprint(c));
// 	c = 12;
// 	printf("%d\n", isprint(c));
// 	printf("%d\n", ft_isprint(c));
// 	return (0);
// }
