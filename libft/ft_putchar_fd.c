/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:12:38 by yseto             #+#    #+#             */
/*   Updated: 2025/04/30 19:53:00 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}

// #include <fcntl.h> // open 関数を使用する場合に必要
// #include <unistd.h> // write 関数を使用する場合に必要

// int	main(void)
// {
// 	int	fd;

// 	// 標準出力に 'A' を出力
// 	ft_putchar_fd('A', 1);
// 	// ファイル "output.txt" を書き込みモードで開く
// 	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd != -1)
// 	{
// 		// ファイルに 'B' を出力
// 		ft_putchar_fd('B', fd);
// 		close(fd);
// 	}
// 	return (0);
// }
