/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:00:35 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/18 01:01:11 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == INT_MIN)
	{
		ft_putstr("-2147483648", count);
		return ;
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

void	ft_put_u_nbr(unsigned int n, int *count)
{
	if (n > 9)
	{
		ft_put_u_nbr(n / 10, count);
		ft_put_u_nbr(n % 10, count);
	}
	else
		ft_putchar(n + '0', count);
}
