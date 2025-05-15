/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:20:53 by yseto             #+#    #+#             */
/*   Updated: 2025/05/14 20:00:21 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	c;
	size_t	count;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		count += write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	c = n % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}

int	ft_putnbr_u(unsigned int n)
{
	size_t	count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_u(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}

int	hundle_c(va_list args)
{
	size_t	count;
	char	c;

	count = 0;
	c = (char)va_arg(args, int);
	ft_putchar(c);
	count++;
	return (count);
}

int	hundle_s(va_list args)
{
	size_t	count;
	char	*s;

	count = 0;
	s = va_arg(args, char *);
	if (!s)
		return (write(1, "(null)", 6));
	count = ft_putstr(s);
	return (count);
}

int	hundle_p(va_list args)
{
	size_t			count;
	void			*ptr;
	unsigned long	address;

	count = 0;
	ptr = va_arg(args, void *);
	if (!ptr)
		return (ft_putstr("(nil)"));
	address = (unsigned long)ptr;
	count += ft_putstr("0x");
	count += ft_puthex(address);
	return (count);
}
