/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:30:34 by yseto             #+#    #+#             */
/*   Updated: 2025/05/02 15:45:46 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include "libft.h" // ft_lstnew と t_list の定義が含まれているヘッダ
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int		value;
// 	t_list	*node;

// 	value = 42;
// 	// ノードを作成
// 	node = ft_lstnew(&value);
// 	// 作成に失敗した場合
// 	if (!node)
// 	{
// 		printf("ノードの作成に失敗しました。\n");
// 		return (1);
// 	}
// 	// 内容を表示（content は void* なので、int* にキャストする）
// 	printf("ノードの値: %d\n", *(int *)(node->content));
// 	// 次のノードは NULL のはず
// 	if (node->next == NULL)
// 		printf("次のノード: NULL\n");
// 	else
// 		printf("次のノード: 存在しています\n");
// 	// メモリの解放
// 	free(node);
// 	return (0);
// }
