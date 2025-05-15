/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:53:22 by yseto             #+#    #+#             */
/*   Updated: 2025/05/14 19:10:54 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
size_t	ft_strlen(const char *s);
int		ft_putstr(char *s);
int		ft_puthex(unsigned long n);
int		ft_puthex_upper(unsigned long n);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
int		hundle_c(va_list args);
int		hundle_s(va_list args);
int		hundle_p(va_list args);
int		hundle_id(va_list args);
int		hundle_u(va_list args);
int		hundle_lower_x(va_list args);
int		hundle_upper_x(va_list args);
int		hundle_percent(void);
int		handle_format(char specifier, va_list args);
int		ft_printf(const char *format, ...);

#endif
