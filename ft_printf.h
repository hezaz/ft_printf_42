/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzaz <hzaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 04:29:25 by hzaz              #+#    #+#             */
/*   Updated: 2022/08/26 05:15:45 by hzaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PRINTF_H
# define PRINTF_H

#include "libft.h"

static void	ft_print_hex(unsigned long long nb, char *hex, int *len);
int			ft_put_hexa(int n, bool max);
void		ft_print_ptr(unsigned long long p, size_t *i);
size_t		ft_put_ptr(void *p);
void		ft_printf_percent(char str, va_list *ap, int *cpt);
int			ft_printf(const char *str, ...);

#	endif
