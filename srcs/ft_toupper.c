/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 20:09:49 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/21 14:50:10 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else if (c >= 'A' && c <= 'Z')
		return (c);
	return (0);
}
/*#include <stdio.h>
int main ()
{
	char a = '&';
	printf("%d\n", ft_toupper(a));
	return 0;
}*/