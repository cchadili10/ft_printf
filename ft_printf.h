/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:28:04 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/16 16:47:02 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# define HEXA "0123456789abcdef"
# define HEXA_MAJ "0123456789ABCDEF"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

void ft_putchar(char c, int *count);
void ft_putstr(char *str, int *count);
void ft_putnbr(int n, int *count);
int ft_printf(const char *format, ...);
int ft_strlen(char *str, int *count);
void ft_putUNnbr(unsigned int n, int *count);
void ft_hexa(unsigned int n, int *count, char *HEXA_);
void ft_hexaP(unsigned long long n, int *count, char *HEXA_);

#endif