/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:01:04 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/22 11:27:12 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		num;
	int		sign;
	char	*ptr;

	num = 0;
	sign = 1;
	ptr = (char *)nptr;
	while ((*ptr >= 9 && *ptr <= 13) || *ptr == 32)
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			sign = -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
		ptr++;
	return (num * sign);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str[] = "12345";
	char str1[] = "1 2 3 4 5 6 7 8 9 0 a b c";
	char str2[] = "+-123";

	printf("Atoi is: %d", ft_atoi(str));
	printf("\nAtoi is: %d", ft_atoi(str1));
	printf("\nAtoi is: %d", ft_atoi(str2));

	return (0);
}*/
