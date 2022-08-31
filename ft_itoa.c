/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 05:28:00 by hedizaz           #+#    #+#             */
/*   Updated: 2022/08/25 01:05:43 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_int(long long n)
{
	size_t	len;
	long	nbr;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	nbr = (unsigned long long)n;
	if (nbr >= 0 && nbr <= 9)
		return (++len);
	while (nbr > 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(long long n)
{
	char	*s;
	size_t	len_nb;
	long	nbr;
	size_t	i;

	len_nb = len_int(n);
	i = 0;
	s = malloc(sizeof(char) * len_nb + 1);
	if (!s)
		return (NULL);
	s[len_nb--] = '\0';
	if (n < 0)
	{
		s[i++] = '-';
		n *= -1;
	}
	nbr = (unsigned long long)n;
	if (nbr == 0)
		s[0] = '0';
	while (nbr > 0 && len_nb >= i)
	{
		s[len_nb--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (s);
}
