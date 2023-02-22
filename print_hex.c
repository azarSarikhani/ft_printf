/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:11:43 by asarikha          #+#    #+#             */
/*   Updated: 2022/12/16 10:39:17 by asarikha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	hex_len(unsigned	int num)
{
	int	print_len;

	print_len = 0;
	while (num != 0)
	{
		print_len++;
		num = num / 16;
	}
	return (print_len);
}

static	void	put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		put_hex(num / 16, format);
		put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			print_char(num + '0');
		else
		{
			if (format == 'x')
				print_char(num - 10 + 'a');
			if (format == 'X')
				print_char(num - 10 + 'A');
		}
	}
}

int	print_hex(unsigned int num, const char format)
{
	int	print_len;

	print_len = 0;
	if (num == 0)
	{
		print_len += write(1, "0", 1);
		return (print_len);
	}
	else
		put_hex(num, format);
		print_len = hex_len(num);
	return (print_len);
}
