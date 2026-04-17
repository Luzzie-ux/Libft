/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:52:09 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/17 11:49:23 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	c;
	int	result;

	printf("Choose a number:");
	scanf("%d", &c);
	result = ft_isdigit(c);
	if (result == 1)
		printf("True Num:%d\n", result);
	else
		printf("Not Num:%d\n", result);
	return (0);
}*/
