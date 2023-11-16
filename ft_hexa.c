/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:30:43 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/16 17:08:49 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_hexa(unsigned int n, int *count, char *HEXA_)
{	
    if (n > 15)
    {
        ft_hexa(n / 16, count, HEXA_);
        ft_hexa(n % 16, count, HEXA_);
    }
    else
    {
        ft_putchar(HEXA_[n], count);
    }
}
void ft_hexaP(unsigned long long num, int *count, char *HEXA_)
{
    if (num > 15)
    {
        ft_hexaP(num / 16, count, HEXA_);
        ft_hexaP(num % 16, count, HEXA_);
    }
    else
    {
        ft_putchar(HEXA_[num], count);
    }
}