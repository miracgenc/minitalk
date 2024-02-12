/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migenc <migenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:02:14 by migenc            #+#    #+#             */
/*   Updated: 2024/02/10 13:02:15 by migenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include "stdlib.h"

int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putnbru(unsigned int n);
int		ft_putnbrhexl(unsigned int n);
int		ft_putnbrhexb(unsigned int n);
int		ft_putnbrhexllong(unsigned long n);
int		ft_putnbrhexp(unsigned long n);
int		counter(int *a, int b);
void	ft_printfif(va_list *ap, int i, int *count, const char *a);
int		ft_printf(const char *a, ...);

int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);

#endif
