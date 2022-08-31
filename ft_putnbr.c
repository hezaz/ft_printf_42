/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:50:31 by hedizaz           #+#    #+#             */
/*   Updated: 2022/08/25 01:08:14 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr(long long n)
{
	char	*s;
	size_t	len;

	s = ft_itoa(n);
	len = ft_strlen(s);
	write(1, s, len);
	free(s);
	return (len);
}
