/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:09:42 by yseto             #+#    #+#             */
/*   Updated: 2025/05/01 20:52:37 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
	return ;
}

// #include <fcntl.h> // open
// #include <stdio.h> // perror
// #include <unistd.h> // write, close

// void	ft_putnbr_fd(int n, int fd);

// int	main(void)
// {
// 	int	fd;

// 	// 標準出力に数値を出力
// 	ft_putnbr_fd(42, 1);
// 	write(1, "\n", 1); // 改行
// 	// 負の数の出力
// 	ft_putnbr_fd(-12345, 1);
// 	write(1, "\n", 1);
// 	// 0の出力
// 	ft_putnbr_fd(0, 1);
// 	write(1, "\n", 1);
// 	// ファイルに数値を書き込む
// 	fd = open("output_putnbr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Failed to open file");
// 		return (1);
// 	}
// 	ft_putnbr_fd(2147483647, fd); // INT_MAX
// 	write(fd, "\n", 1);
// 	ft_putnbr_fd(-2147483648, fd); // INT_MIN
// 	write(fd, "\n", 1);
// 	close(fd);
// 	return (0);
// }
