/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:29 by shaas             #+#    #+#             */
/*   Updated: 2021/08/21 15:50:30 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_decimal(va_list args)
{
	int	d;

	d = va_arg(args, int);
	return (ft_actually_print_integer(d, 0));
}