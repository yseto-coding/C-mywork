/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:35:59 by yseto             #+#    #+#             */
/*   Updated: 2025/05/01 21:08:19 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			total_size;
	size_t			i;
	size_t			max;

	max = (size_t)-1;
	if (nmemb != 0 && size > max / nmemb)
		return (NULL);
	total_size = nmemb * size;
	arr = malloc(total_size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int	*arr1;
// 	int	*arr2;
// 	int	i;

// 	i = 0;
// 	arr1 = (int *)ft_calloc(5, sizeof(int));
// 	while (i < 5)
// 	{
// 		printf("%d", arr1[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	arr2 = (int *)calloc(5, sizeof(int));
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d", arr2[i]);
// 		i++;
// 	}
// 	return (0);
// }
