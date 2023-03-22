/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:36:26 by llombard          #+#    #+#             */
/*   Updated: 2022/11/02 11:59:28 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_putchar(int c);
int	ft_string(char *frase);
int	ft_unsi(unsigned int u);
int	ft_putnbr(int d);
int	ft_nbrexa(unsigned int nu, char format);
int	ft_pointer(unsigned long k);
int	ft_printf(const char *str, ...);

#endif
