/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:17:21 by pcervant          #+#    #+#             */
/*   Updated: 2024/11/05 20:19:45 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int num)
{
	int	n;

	n = 0;
	if (num > 9)
	{
		n += ft_printunsigned(num / 10);
	}
	return (n += ft_printchar(num % 10 + '0'));
}
