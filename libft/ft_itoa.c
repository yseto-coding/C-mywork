/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 22:31:53 by yseto             #+#    #+#             */
/*   Updated: 2025/05/01 20:57:26 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_digits(long num)
{
	int	cd;

	cd = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		cd++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		cd++;
	}
	return (cd);
}

static void	ft_itoa2(char *s_num, long num, int cd)
{
	size_t	i;

	if (num < 0)
	{
		num *= -1;
		s_num[0] = '-';
	}
	i = 0;
	while (num > 0)
	{
		s_num[--cd] = (num % 10) + '0';
		num /= 10;
	}
	return ;
}

char	*ft_itoa(int n)
{
	char	*s_num;
	int		cd;
	long	num;

	num = n;
	cd = count_digits(num);
	s_num = (char *)malloc(sizeof(char) * (cd + 1));
	if (!s_num)
		return (NULL);
	if (num == 0)
	{
		s_num[0] = 0 + '0';
		s_num[1] = '\0';
		return (s_num);
	}
	s_num[cd] = '\0';
	ft_itoa2(s_num, num, cd);
	return (s_num);
}

// int	main(void)
// {
// 	int		n;
// 	char	*s_num;

// 	n = 0;
// 	s_num = ft_itoa(n);
// 	printf("%s", s_num);
// 	return (0);
// }
