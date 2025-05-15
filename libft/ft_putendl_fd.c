/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:02:38 by yseto             #+#    #+#             */
/*   Updated: 2025/05/01 20:43:23 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
	return ;
}

// #include <fcntl.h> // open
// #include <stdio.h>
// #include <unistd.h> // write, close

// int	main(void)
// {
// 	int	fd;

// 	// 標準出力に文字列を改行付きで出力
// 	ft_putendl_fd("Hello, world!", 1);
// 	// 標準エラー出力にエラーメッセージを出力
// 	ft_putendl_fd("This is an error line.", 2);
// 	// ファイルに文字列＋改行を書き込む
// 	fd = open("output_putendl.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Failed to open file");
// 		return (1);
// 	}
// 	ft_putendl_fd("Writing this line to a file.", fd);
// 	close(fd);
// 	return (0);
// }
