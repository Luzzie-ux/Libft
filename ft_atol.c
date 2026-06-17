/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 17:25:46 by rodrpere          #+#    #+#             */
/*   Updated: 2026/06/17 17:25:55 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nptr)
{
	long		num;
	long		sign;
	char		*ptr;

	num = 0;
	sign = 1;
	ptr = (char *)nptr;
	while (ptr && (*ptr == ' ' || *ptr == '\t'
			|| *ptr == '\n' || *ptr == '\r'
			|| *ptr == '\v' || *ptr == '\f'))
		ptr++;
	if (*ptr == '+')
		ptr++;
	else if (*ptr == '-')
	{
		sign *= -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		num = (num * 10) + (*ptr - '0');
		ptr++;
	}
	return (num * sign);
}
