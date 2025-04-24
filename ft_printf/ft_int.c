/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <aosmenaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:05:33 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/11/07 14:13:37 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int(int n)
{
	int			i;
	char		seq[10];
	int			rt;

	i = 0;
	rt = ft_contr(n);
	if (rt == 1 && n == 0)
		return (rt);
	else if (rt == 1 && n < 0)
		n *= -1;
	else if (rt == 11)
	{
		return (rt);
	}
	while (n > 0)
	{
		seq[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	i--;
	ft_scrivi(i, seq);
	return (i + 1 + rt);
}
/*
int main()
{
	int c = 0;
	ft_int(c);
}
*/
