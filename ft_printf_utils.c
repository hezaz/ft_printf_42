/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzaz <hzaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:16:29 by hzaz              #+#    #+#             */
/*   Updated: 2022/08/26 04:33:24 by hzaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_hex(unsigned long long nb, char *hex, int *len)
{
	if (nb > 15)
	{
		ft_print_hex(nb / 16, hex, len);
		ft_putchar(hex[(nb % 16)]);
		(*len)++;
	}
	else
	{
		ft_putchar(hex[(nb % 16)]);
		(*len)++;
	}
}

int	ft_put_hexa(int n, bool max)
{
	int				len;
	unsigned int	nb;
	char			*hex;

	len = 0;
	nb = n;
	if (max)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	ft_print_hex(nb, hex, &len);
	return (len);
}

void	ft_print_ptr(unsigned long long p, size_t *i)
{
	const char			hexa[16] = "0123456789abcdef";
	unsigned long long	n;

	n = (unsigned long long)p;
	if (n > 15)
	{
		ft_print_ptr(n / 16, i);
		*i += ft_putchar(hexa[n % 16]);
	}
	else
		*i += ft_putchar(hexa[n]);
}

size_t	ft_put_ptr(void *p)
{
	size_t				i;
	unsigned long long	ptr;

	i = ft_putstr("0x");
	ptr = (unsigned long long)p;
	ft_print_ptr(ptr, &i);
	return (i);
}

void	ft_printf_percent(char str, va_list *ap, int *cpt)
{
	if (str == '%')
		*cpt += ft_putchar('%');
	else if (str == 'd' || str == 'i')
		*cpt += ft_putnbr((long long)va_arg(*ap, int));
	else if (str == 'c')
		*cpt += ft_putchar((char)va_arg(*ap, int));
	else if (str == 's')
		*cpt += ft_putstr(va_arg(*ap, char *));
	else if (str == 'u')
		*cpt += ft_putnbr(va_arg(*ap, unsigned int));
	else if (str == 'x')
		*cpt += ft_put_hexa((long long)va_arg(*ap, int), 0);
	else if (str == 'X')
		*cpt += ft_put_hexa((long long)va_arg(*ap, int), 1);
	else if (str == 'p')
		*cpt += ft_put_ptr(va_arg(*ap, void *));
}
