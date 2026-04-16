/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:52:04 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/16 16:35:49 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*For the character classification functions (isalpha, isdigit,
isalnum, isascii, isprint), the return value must be:
• 1 if the character matches the tested class
• 0 if the character does not match*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char	c;
	int	result;

	printf("Choose a letter:");
	scanf("%s", &c);
	result = ft_isalpha(c);
	if (result == 1)
		printf("True char:%d\n", result);
	else 
		printf("Not true char:%d\n", result);
	return (0);
}*/
