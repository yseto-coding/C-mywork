/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:56:23 by yseto             #+#    #+#             */
/*   Updated: 2025/05/02 15:20:48 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i; // インデックスは使用しない場合は無視
// 	if (c && *c)
// 		*c = toupper(*c);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

// int	main(void)
// {
// 	char	str[] = "hello, world!";

// 	ft_striteri(str, to_upper);
// 	printf("%s\n", str); // 出力: HELLO, WORLD!
// 	return (0);
// }
