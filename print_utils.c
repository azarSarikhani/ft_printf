/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:11:43 by asarikha          #+#    #+#             */
/*   Updated: 2022/12/09 13:28:44 by asarikha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str(char *str)
{
	int	print_len;

	if (str == NULL)
	{
		print_str("(null)");
		return (6);
	}
	print_len = 0;
	while (str[print_len])
	{
		write(1, &str[print_len], 1);
		print_len++;
	}
	return (print_len);
}
