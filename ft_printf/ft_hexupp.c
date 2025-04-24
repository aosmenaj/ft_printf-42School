/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexupp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <aosmenaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:26:11 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/11/07 14:43:57 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexupp(unsigned int n)
{
	char	myn[50];
	int		i;
	char	*base;

	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	base = "0123456789ABCDEF";
	while (n > 0)
	{
		myn[i++] = base[n % 16];
		n = n / 16;
	}
	i--;
	ft_scrivi(i, myn);
	return (i + 1);
}
