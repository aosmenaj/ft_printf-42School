/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <aosmenaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:55:58 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/11/07 14:23:49 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_point(uintptr_t indi)
{
	char	myn[50];
	int		i;
	char	*base;

	if (indi == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	i = 0;
	base = "0123456789abcdef";
	write(1, "0x", 2);
	while (indi > 0)
	{
		myn[i++] = base[indi % 16];
		indi = indi / 16;
	}
	i--;
	ft_scrivi(i, myn);
	return (i + 3);
}
/*
int main ()
{
	char c = 1;
	void *p;
	p = &c;
	ft_point((uintptr_t)p);
	
	printf("\n%p\n", p);
	printf("%d\n", ft_point((uintptr_t)p));
}
*/
