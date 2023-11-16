/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:00:35 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/16 03:06:11 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr(int n, int *count)
{
    if(n == INT_MIN)
    {
        ft_putstr("-2147483648", count);
        return;
    }
    if (n < 0)
    {
        ft_putchar('-', count);
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10, count);
        ft_putnbr(n % 10, count);
    }
    else
        ft_putchar(n + '0', count);
}
void ft_putUNnbr(unsigned int n, int *count)
{
    if (n > 9)
    {
        ft_putUNnbr(n / 10, count);
        ft_putUNnbr(n % 10, count);
    }
    else
        ft_putchar(n + '0', count);
}