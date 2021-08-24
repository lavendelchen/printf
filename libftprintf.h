/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:47:18 by shaas             #+#    #+#             */
/*   Updated: 2021/08/24 21:09:54 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H // header zurueck aendern!!!!!! (libftprintf.h)

# include <stdarg.h> // variadic functions
# include <unistd.h> // uhhhh not sure
# include <stdio.h> // test purposes
# include <limits.h> // UINT_MAX (hexa)
# include <stdlib.h> // malloc/free
# include "libftprintf.h"

typedef struct s_flags
{
	int	minus;
	int	zero;
	int	width;
	int	precision;
}				t_flags;

int		ft_printf(const char *string, ...);
int		ft_flags(const char *string, t_flags *flags);
int		ft_print_percent_sign(t_flags *flags);
int		ft_print_character(va_list args, t_flags *flags);
int		ft_print_string(va_list args, t_flags *flags);
int		ft_print_integer(va_list args, t_flags *flags);
int		ft_print_decimal(va_list args, t_flags *flags);
int		ft_print_unsigned(va_list args, t_flags *flags);
int		ft_print_hexa_lower(va_list args, t_flags *flags);
int		ft_print_hexa_upper(va_list args, t_flags *flags);
int		ft_print_pointer(va_list args, t_flags *flags);
int		ft_print_wtf(void);
int		ft_actually_print_character(int c);
int		ft_actually_print_string(char *str);
int		ft_actually_print_integer(int i, int char_num);
int		ft_hexa_printer(int *arr, int size_of_arr, char *char_set);
void	ft_hexa_converter(unsigned long long x, int *arr,
			unsigned long long divider);
int		ft_atoi(const char *str);

#endif
