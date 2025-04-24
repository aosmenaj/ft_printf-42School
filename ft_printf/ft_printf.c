/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <aosmenaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:04:52 by aosmenaj          #+#    #+#             */
/*   Updated: 2024/01/10 19:09:08 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_conver(const char par, va_list arglist)
{
	int	rt;

	rt = 0;
	if (par == 'd' || par == 'i')
		rt = ft_int(va_arg(arglist, int));
	else if (par == 'c')
		rt = ft_char(va_arg(arglist, int));
	else if (par == 'p')
		rt = ft_point(va_arg(arglist, uintptr_t));
	else if (par == 's')
		rt = ft_string(va_arg(arglist, char *));
	else if (par == '%')
		rt = ft_perc();
	else if (par == 'u')
		rt = ft_uns(va_arg(arglist, unsigned int));
	else if (par == 'x')
		rt = ft_hexlow(va_arg(arglist, unsigned int));
	else if (par == 'X')
		rt = ft_hexupp(va_arg(arglist, unsigned int));
	return (rt);
}

int	ft_printf(const char *par, ...)
{
	int		rt;
	int		i;
	va_list	arglist;

	va_start(arglist, par);
	rt = 0;
	i = 0;
	while (par[i] != '\0')
	{
		if (par[i] == '%')
		{
			rt += ft_conver(par[++i], arglist);
		}
		else
		{
			write (1, &par[i], 1);
			rt++;
		}
		i++;
	}
	return (rt);
}

int main ()
{
// 	// char c = 1;
// 	// void *p;
// 	// p = &c;
// 	// printf("%d\n", ft_printf(" %p  %c  %u  %s  %x  %X  %d  %i  %%", 
// 			// p, 't', 42, "ciao", 11, 11, 42, 42, '%'));

	ft_printf ("   NULL %s NULL ", NULL);
}