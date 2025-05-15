/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:12:54 by yseto             #+#    #+#             */
/*   Updated: 2025/05/14 19:55:40 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(char specifier, va_list args)
{
	size_t	count;

	count = 0;
	if (specifier == 'c')
		count += hundle_c(args);
	else if (specifier == 's')
		count += hundle_s(args);
	else if (specifier == 'p')
		count += hundle_p(args);
	else if (specifier == 'd' || specifier == 'i')
		count += hundle_id(args);
	else if (specifier == 'u')
		count += hundle_u(args);
	else if (specifier == 'x')
		count += hundle_lower_x(args);
	else if (specifier == 'X')
		count += hundle_upper_x(args);
	else if (specifier == '%')
		count += hundle_percent();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	size_t	count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += handle_format(format[i + 1], args);
			i += 2;
		}
		else
		{
			ft_putchar(format[i]);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}

// #include <stdio.h> // 標準 printf 用

// int	main(void)
// {
// 	int		len;
// 	void	*p;

// 	p = 0;
// 	len = printf("%p,%p", p, p);
// 	printf("%d", len);
// 	len = ft_printf("%p,%p", p, p);
// 	ft_printf("%d", len);
// 	return (0);
// }
