/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:52:12 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/18 22:54:25 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*#include <stdio.h>
int	main(void)
{
	char ch;
	printf("Write a printable character:");
	scanf("%c", &ch);
	int asciiValue = (int) ch;

	printf("Is it printable?: (%d) %s\n\n", asciiValue, ft_isprint(asciiValue) ? "true": "false");
	printf("ASCII value of %c is %d\n", ch, asciiValue);
    return 0;
}*/