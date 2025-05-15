/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:57:39 by yseto             #+#    #+#             */
/*   Updated: 2025/04/30 20:01:03 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <fcntl.h> // open
// #include <stdio.h> // perror
// #include <unistd.h> // write, close

// void	ft_putstr_fd(char *s, int fd);

// int	main(void)
// {
// 	int	fd;

// 	// 標準出力 (端末画面) に文字列を表示
// 	ft_putstr_fd("Hello, terminal output!\n", 1);
// 	// 標準エラー出力に文字列を表示
// 	ft_putstr_fd("This is an error message.\n", 2);
// 	// ファイルに文字列を書き込む
// 	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Failed to open file");
// 		return (1);
// 	}
// 	ft_putstr_fd("Writing to a file using ft_putstr_fd.\n", fd);
// 	close(fd);
// 	return (0);
// }
