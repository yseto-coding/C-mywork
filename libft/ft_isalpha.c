/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 22:05:48 by yseto             #+#    #+#             */
/*   Updated: 2025/04/25 12:24:36 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	c;

// 	c = 'a';
// 	if (isalpha(c))
// 		printf("%d\n", isalpha(c));
// 	else
// 		printf("%d\n", isalpha(c));
// 	if (ft_isalpha(c))
// 		printf("%d\n", ft_isalpha(c));
// 	else
// 		printf("%d\n", ft_isalpha(c));
// 	return (0);
// }
