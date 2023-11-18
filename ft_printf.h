/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:28:04 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/18 01:05:00 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXA "0123456789abcdef"
# define HEXA_MAJ "0123456789ABCDEF"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int n, int *count);
void	ft_put_u_nbr(unsigned int n, int *count);
void	ft_hexa(unsigned int n, int *count, char *HEXA_);
void	ft_hexap(unsigned long long n, int *count, char *HEXA_);

#endif