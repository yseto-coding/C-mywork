/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:20:59 by yseto             #+#    #+#             */
/*   Updated: 2025/05/14 19:46:52 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hundle_id(va_list args)
{
	int		num;
	size_t	count;

	count = 0;
	num = va_arg(args, int);
	count += ft_putnbr(num);
	return (count);
}

int	hundle_u(va_list args)
{
	size_t			count;
	unsigned int	unum;

	unum = va_arg(args, unsigned int);
	count = ft_putnbr_u(unum);
	return (count);
}

int	hundle_lower_x(va_list args)
{
	size_t			count;
	unsigned int	x;

	count = 0;
	x = va_arg(args, unsigned int);
	count = ft_puthex((unsigned long)x);
	return (count);
}

int	hundle_upper_x(va_list args)
{
	size_t			count;
	unsigned int	x;

	count = 0;
	x = va_arg(args, unsigned int);
	count = ft_puthex_upper((unsigned long)x);
	return (count);
}

int	hundle_percent(void)
{
	size_t	count;

	count = ft_putchar('%');
	return (count);
}
