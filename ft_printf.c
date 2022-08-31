/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzaz <hzaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 01:52:03 by hzaz              #+#    #+#             */
/*   Updated: 2022/08/26 05:04:08 by hzaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		cpt;

	cpt = 0;
	va_start(ap, str);
	while (*str != 0)
	{
		if (*str == '%')
			ft_printf_percent(*(++str), &ap, &cpt);
		else
			cpt += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (cpt);
}
