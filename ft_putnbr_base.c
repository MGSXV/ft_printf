/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:12:34 by sel-kham          #+#    #+#             */
/*   Updated: 2021/12/15 01:33:06 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(char *base, long long num, int *count)
{
    int	base_len;
	
	base_len = ft_strlen(base);
	if (num < 0)
	{
		ft_putchar('-', count);
		num = -num;
	}
	if (num > base_len - 1)
	{
		ft_putnbr_base(base, num / base_len, count);
		ft_putchar(base[num % base_len], count);
	}
	else
		ft_putchar(base[num], count);
}
