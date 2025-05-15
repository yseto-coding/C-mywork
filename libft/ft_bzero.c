/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:07:37 by yseto             #+#    #+#             */
/*   Updated: 2025/04/25 12:24:34 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int	arr1[10];
// 	int	arr2[10];
// 	int	i;

// 	bzero(arr1, sizeof(arr1));
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d", arr1[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_bzero(arr2, sizeof(arr2));
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d", arr2[i]);
// 		i++;
// 	}
// 	return (0);
// }
