/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <aosmenaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:01:25 by aosmenaj          #+#    #+#             */
/*   Updated: 2024/01/10 19:10:04 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlow(unsigned int n)
{
	printf("%u", n);
	char	myn[50];
	int		i;
	char	*base;

	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	base = "0123456789abcdef";
	while (n > 0)
	{
		myn[i++] = base[n % 16];
		n = n / 16;
	}
	i--;
	ft_scrivi(i, myn);
	return (i + 1);
}
