/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:41:31 by hchadili          #+#    #+#             */
/*   Updated: 2023/11/16 21:43:59 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list arg;
    int count = 0;
    va_start(arg,format);
	if (!format || write(1,"",0) == -1)
		return(-1);
    while (*format)
    {
		if (*format == '%')
		{
			format++;
			if (*format == '\0') break; 
			if (*format == 'd' || *format == 'i' || *format == 'u')
			{
				int num = va_arg(arg,int);
				if (*format == 'u')
					ft_putUNnbr(num, &count);
				else
					ft_putnbr(num, &count);
			}
			if (*format == 's')
			{
				char *str = va_arg(arg,char *);
				if(str == NULL)
					ft_putstr("(null)", &count);
				else
					ft_putstr(str, &count);
			}
			if (*format == 'x' || *format == 'X')
			{
				unsigned int num = va_arg(arg,int);
				if (*format == 'x')
					ft_hexa(num, &count, HEXA);
				else
					ft_hexa(num, &count, HEXA_MAJ);
			}
			if (*format == 'p')
			{
				unsigned long long num = va_arg(arg,unsigned long long);
				ft_putstr("0x", &count);
				ft_hexaP(num, &count, HEXA);
			}
			if (*format == 'c')
			{
				char c = va_arg(arg,int);
				ft_putchar(c, &count);
			}
			if (*format == '%')
				ft_putchar('%', &count);
			format++;
		}
		else
		{
			ft_putchar(*format, &count);
			format++;
		}
    }
    va_end(arg);
    return (count);
}

int main()
{
    // unsigned int age = 1234;
	// unsigned int *p = &age;
     //char *name = "hamza";
    // char l = '-';
   // int y = ft_printf("%s",NULL);
    //int x = printf("my %c name is %s Im %d yours %%old", l, name, age);
	ft_printf("%x", 1234);
	//printf("\n");
	//ft_printf("%p", (void *)LONG_MAX);
	//ft_printf("%s","");
    //int y = ft_printf("my %c name is %s Im %d yours %%old", l, name, age);
    //int x = ft_printf("hamza");
	//printf("\n %d", x);
	//printf("\n %d", y);
    return 0;
}

