/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosmenaj <aosmenaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:36:31 by aosmenaj          #+#    #+#             */
/*   Updated: 2023/11/07 14:52:36 by aosmenaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>
# include <stdio.h>

int		ft_char(char c);
void	ft_scrivi(int i, char *seq);
int		ft_string(char *s);
int		ft_point(uintptr_t indi);
int		ft_contr(int n);
int		ft_int(int n);
int		ft_perc(void);
int		ft_uns(unsigned int n);
int		ft_hexlow(unsigned int n);
int		ft_hexupp(unsigned int n);
int		ft_printf(const char *par, ...);

#endif
