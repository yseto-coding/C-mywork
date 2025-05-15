/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:16:29 by yseto             #+#    #+#             */
/*   Updated: 2025/04/29 22:29:48 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	dup = (char *)malloc(s_len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // ft_strdupのプロトタイプ宣言（あなたの実装をリンクする前提）
// char	*ft_strdup(const char *s);

// int	main(void)
// {
// 	const char	*original = "Hello, world!";
// 	char		*dup_std;
// 	char		*dup_ft;

// 	// 標準のstrdup
// 	dup_std = strdup(original);
// 	if (dup_std == NULL)
// 	{
// 		perror("strdup");
// 		return (1);
// 	}
// 	// 自作のft_strdup
// 	dup_ft = ft_strdup(original);
// 	if (dup_ft == NULL)
// 	{
// 		perror("ft_strdup");
// 		free(dup_std);
// 		return (1);
// 	}
// 	printf("Original: %s\n", original);
// 	printf("strdup   : %s\n", dup_std);
// 	printf("ft_strdup: %s\n", dup_ft);
// 	// メモリリーク防止のために開放
// 	free(dup_std);
// 	free(dup_ft);
// 	return (0);
// }
