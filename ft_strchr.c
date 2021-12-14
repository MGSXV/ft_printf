/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:13:41 by sel-kham          #+#    #+#             */
/*   Updated: 2021/12/14 09:14:57 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (s[++i])
		if (s[i] == (char) c)
			return ((char *) s + i);
	if (!c)
		return ((char *) s + i);
	return (0);
}
