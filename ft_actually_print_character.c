/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actually_print_character.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:56:47 by shaas             #+#    #+#             */
/*   Updated: 2021/08/24 21:15:09 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_actually_print_character(int c, t_flags *flags)
{
	write(1, &c, 1);
	return (1);
}
